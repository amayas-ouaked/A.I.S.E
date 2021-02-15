#include <signal.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/syscall.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>



pid_t child;
void sig_handler(int sig){

    printf("Send USR1 to child \n");
    kill(child,10);
    alarm(3);
}

void sigint(int sig){
    printf("Send SIGINT to child \n");
    kill(child,2);
    exit(1);    
}

int cpt=0;
void sigchild(int sig){
    printf("Compteur = %d \n", ++cpt );
}




int main( int argc, char ** argv)
{
child = fork();

if(child==0){
signal(SIGUSR1,sigchild);

}
else{
    signal(SIGALRM, sig_handler);
    signal(SIGINT, sigint);
    alarm(3);
    wait(NULL);

}
while(1) {}
    return 0;
}