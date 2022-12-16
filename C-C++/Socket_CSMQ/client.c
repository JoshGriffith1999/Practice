#include<stdio.h>
#include<stdlib.h>
#include<czmq.h>

//compile: gcc -o client client.c -lczmq

int main(int argc, char** argv){

    //set up 
    //char* send_msg1 = argv[1];
    //char* send_msg2 = argv[2];
    //char* send_msg3 = argv[3];

    zsock_t* request = zsock_new(ZMQ_REQ);
    zsock_connect(request, "tcp://localhost:5555");

    for(int i = 0; i< 100; i++){
        
        zstr_send(request, argv[i%argc]);

        sleep(1);

        char* str = zstr_recv(request);

        printf("%s", str);
    }
    zsock_destroy(&request);
}