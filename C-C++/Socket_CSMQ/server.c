#include<czmq.h>

//compile: gcc -o sever server.c -lczmq

int main(int argc, char** argv){

    zsock_t* responder = zsock_new(ZMQ_REP);
    int error_code = zsock_bind(responder, "tcp://*:5555");

    if (error_code != 5555){
        printf("Failed to bind to port 5555");
    }
    else{

        while(true){

            char* msg = zstr_recv(responder);
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
    return 0;
}