/*
    Date: 11/28/2023
    Author: Joshua Griffith
    Client: Dorks unlimited
    Purpose: Build a TCP Server that will eventually output a modbus message to a client
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<unistd.h>

#include <sys/types.h>
#include <sys/socket.h>


#include<netinet/in.h>
#include<netinet/ip.h>

#include<arpa/inet.h>


#define SERVER_DOMAIN '127.0.0.1'
#define SERVER_PORT   2500
#define MAX_BUFFER_SIZE 1024


int main(int argc, char** argv){

    char xmit_buffer[MAX_BUFFER_SIZE];
    char recv_buffer[MAX_BUFFER_SIZE];

    //Setup the inbound Server IP settings
    struct sockaddr_in Server_IPv4_Settings = {0};
    socklen_t Server_IPv4_Settings_Len = sizeof(Server_IPv4_Settings);

    Server_IPv4_Settings.sin_family = AF_INET; // IPv4
    Server_IPv4_Settings.sin_port = htons(SERVER_PORT); //Convert port number from network byte order to host byte order

    //Setup the Client Accept IP Settings
    struct sockaddr Client_IPv4_Settings = {0};
    socklen_t Client_IPv4_Settings_Len = sizeof(Client_IPv4_Settings);

    //1. Create socket file descriptor
    //IPv4, TCP Stream Connection, 0
    int socket_file_desc = socket(AF_INET, SOCK_STREAM, 0);

    if(socket_file_desc < 0){ 
        printf("Error on socket file descirptor creation. Error Code %d\n", socket_file_desc);
        return -1;
    }

    //2. Bind socket file descriptor to a port on the local machine
    int bind_err = bind(socket_file_desc, (struct sockaddr*)&Server_IPv4_Settings, Server_IPv4_Settings_Len);

    if(bind_err < 0){
        printf("Failed to bind the socket. Error Code %d\n", bind_err);
        return -1;
    }

    //3. Listen for network connection on the current socket port
    int listen_err = listen(socket_file_desc, 0);

    if(listen_err < 0){
        printf("Failed on listen. Error code %d", listen_err);
        return -1;
    }

     //4. Accept network connection from a client
    int client_file_descriptor = accept(socket_file_desc, &Client_IPv4_Settings, &Client_IPv4_Settings_Len);
    if(client_file_descriptor < 0){
        printf("Failed on the Accept. Error code %d", client_file_descriptor);
        return -1;
    }
    
    while(recv_buffer != "EOT"){

        //5. Hear response back from mbserver
        ssize_t recvd = recv(client_file_descriptor, recv_buffer, MAX_BUFFER_SIZE-1, 0);

        if(recvd < 0){
            printf("Error on receiving a message %ld\n", recvd);
        }

        //6. Write a response

        if(recvd < 0){
            strncpy(xmit_buffer, "Last Error Was Muttled\n", MAX_BUFFER_SIZE);
            ssize_t sent = send(client_file_descriptor, (void*)xmit_buffer, strlen(xmit_buffer), 0);
        }
        else{
            strncpy(xmit_buffer, recv_buffer, MAX_BUFFER_SIZE);
            ssize_t sent = send(client_file_descriptor, (void*)xmit_buffer, strlen(xmit_buffer), 0);
        }

        printf("Received from Modbus server %s\n", recv_buffer);
        printf("Echoed message back to Modbus server %s\n", recv_buffer);
    }
    

    
    //clinet shit


    //cleanup
    close(client_file_descriptor);
    close(socket_file_desc);

    return 0;
}