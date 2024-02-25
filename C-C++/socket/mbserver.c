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

void flushBuffer(char* buffer, int num);

int main(int argc, char** argv){

    char xmit_buffer[MAX_BUFFER_SIZE];
    char recv_buffer[MAX_BUFFER_SIZE];

    //Setup the outbound Server IP settings
    struct sockaddr_in Server_IPv4_Settings = {0};
    socklen_t Server_IPv4_Settings_Len = sizeof(Server_IPv4_Settings);

    Server_IPv4_Settings.sin_family = AF_INET; // IPv4
    Server_IPv4_Settings.sin_port = htons(SERVER_PORT); //Convert port number from network byte order to host byte order
    Server_IPv4_Settings.sin_addr.s_addr = htonl(0x7f000001); //Assign the IP of the server we want to connect to
    

    //1. Create socket file descriptor
    //IPv4, TCP Stream Connection, 0
    int socket_file_desc = socket(AF_INET, SOCK_STREAM, 0);

    if(socket_file_desc < 0){ 
        printf("Error on socket file descirptor creation. Error Code %d\n", socket_file_desc);
        return -1;
    }

    //2. Connect socket file descriptor to a port on the local machine
    int connect_err = connect(socket_file_desc, (struct sockaddr*)&Server_IPv4_Settings, Server_IPv4_Settings_Len);

    if(connect_err < 0){
        printf("Failed to connect to the server socket. Error Code %d\n", connect_err);
        return -1;
    }

    do{

        //3. Send a response to the TCP Server
        //strncpy(xmit_buffer, "This is the Modbus Server Response", MAX_BUFFER_SIZE);
        puts("Enter a message to send\t");
        int num_characters = scanf("%1024s", xmit_buffer); // Get transmit message from user input
        ssize_t sent = send(socket_file_desc, (void*)xmit_buffer, strlen(xmit_buffer), 0);


        //4. Receive a message to the server
        ssize_t recvd = recv(socket_file_desc, recv_buffer, MAX_BUFFER_SIZE-1, 0);

        if(recvd < 0){
            printf("Error on receiving a message %ld\n", recvd);
        }
-
        printf("Received from TCP server %s\n", recv_buffer);
        
        flushBuffer(xmit_buffer, strlen(xmit_buffer) );
        
    }while(xmit_buffer != "EOF");

    //cleanup
    close(socket_file_desc);
    return 0;
}

void flushBuffer(char* buffer, int num){

    char EMPTY_BUFFER[MAX_BUFFER_SIZE] = {" "};

    strncpy(buffer, EMPTY_BUFFER, MAX_BUFFER_SIZE);
    fflush(stdin);
}