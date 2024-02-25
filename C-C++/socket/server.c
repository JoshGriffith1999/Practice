#include <netinet/in.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/socket.h>
#include <unistd.h>

#define PORT 1791
#define DOMAIN '10.0.2.15'


//Server Socket Program 
int main(int argc, char const* argv[]){

    //Needed variables
    int server_fd = 0;
    int new_socket = 0;
    int valread = 0;
    struct sockaddr_in address;
    int opt = 1;
    int addrlen = sizeof(address);
    char* buffer;
    char response[] = {'Server Resonse', "Hello from server"};
    int reponse_control = 0;

    //1. Create - AF_INTET = IPv4, SOCK_STREAM = TCP, 0 = protocall IP
    if ((server_fd = socket(AF_INET, SOCK_STREAM, 0)) < 0) {
        perror("socket failed");
        exit(EXIT_FAILURE);
    }

    //2. Setup - attaching socket to the port 1791
    if (setsockopt(server_fd, SOL_SOCKET, SO_REUSEADDR | SO_REUSEPORT, &opt, sizeof(opt))) {
        perror("setsockopt");
        exit(EXIT_FAILURE);
    }
    address.sin_family = AF_INET;
    address.sin_addr.s_addr = INADDR_ANY;
    address.sin_port = htons(PORT);

    //3. Bind - attaching socket to the port 1791
    if (bind(server_fd, (struct sockaddr*)&address, sizeof(address)) < 0) {
        perror("bind failed");
        exit(EXIT_FAILURE);
    }
    printf('Starting to Listen');
    //4. Listen
    while(1){
    
        if (listen(server_fd, 3) < 0) {
            perror("listen");
            exit(EXIT_FAILURE);
        }

        //5. Accept
        if ((new_socket = accept(server_fd, (struct sockaddr*)&address, (socklen_t*)&addrlen)) < 0) {
            perror("accept");
            exit(EXIT_FAILURE);
        }

        valread = read(new_socket, buffer, 1024);
        printf("%s\n", buffer);

        if(reponse_control == 0){
            //Send response to the client
            send(new_socket, response[0], strlen(response[0]), 0);
            printf("Hello message sent\n");
            reponse_control++;
        }else{
            //Send response to the client
            send(new_socket, response[1], strlen(response[1]), 0);
            printf("Response message sent\n");
            reponse_control--;
        }

        if(strcmp(buffer,'close'))
            break;
    }
    //6. Clean Up
    // closing the connected socket
    close(new_socket);
    // closing the listening socket
    shutdown(server_fd, SHUT_RDWR);


    return 0;
}