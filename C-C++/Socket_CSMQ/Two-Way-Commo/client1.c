#include<czmq.h>

//compile: gcc -o sever server.c -lczmq

int main(int argc, char** argv){

    //Setup a recieving socket
    zsock_t* request = zsock_new(ZMQ_REQ);
    zsock_connect(request, "tcp://10.0.2.15:5555");
    
    //Set up a responding socket
    zsock_t* responder = zsock_new(ZMQ_REP);
    int error_code = zsock_bind(responder, "tcp://10.0.2.15:5555");

    if (error_code != 5555){
        printf("Failed to bind to port 5555");
    }
    else{

        while(true){

            char* msg = zstr_recv(request);
            printf("%s", msg);
            
            if(!strcmp(msg, "Hello")){
                zstr_send(responder, "World\n");
            }
            else if(!strcmp(msg, "Hi")){
                zstr_send(responder, "Johnny\n");
            }
            else{
                zstr_send(responder, "Banjo\n");
            }

            free(msg);
        }
    }

    zsock_destroy(&responder);
    zsock_destroy(&request);
    return 0;
}