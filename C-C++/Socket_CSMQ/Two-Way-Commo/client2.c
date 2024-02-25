#include<czmq.h>

//compile: gcc -o sever server.c -lczmq

int main(int argc, char** argv){

    char send[] = {"Hello", "Hi"}
    char listen[] = {"World", "Johnny", "Banjo"}
    
    //Setup a recieving socket
    zsock_t* request = zsock_new(ZMQ_REQ);
    zsock_connect(request, "tcp://*:5555");
    
    //Set up a responding socket
    zsock_t* responder = zsock_new(ZMQ_REP);
    int error_code = zsock_bind(responder, "tcp://*:5555");

    if (error_code != 5555){
        printf("Failed to bind to port 5555");
    }
    else{

        while(true){

            char* msg = zstr_recv(request);
            printf("%s", msg);
            
            if(!strcmp(msg, "World")){
                zstr_send(responder, send[0]);
            }
            else if(!strcmp(msg, "Johnny")){
                zstr_send(responder, send[1]);
            }
            else{
                zstr_send(responder, send[2]);
            }

            free(msg);
        }
    }

    zsock_destroy(&responder);
    zsock_destroy(&request);
    return 0;
}