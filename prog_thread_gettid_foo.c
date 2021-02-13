#include <stdio.h>
#include <unistd.h>
#include <omp.h>
#include <sys/syscall.h>
#include <sys/types.h>

pid_t
gettid(void)
{

    return syscall(SYS_gettid);
}

void foo(){
    int a;
    printf("Attendez !!! thread %ld dans le processus %ld  valeur a = %p \n", gettid(), getpid(), &a);
    sleep(1);
}
//programme qui fait des threads

int main( int argc, char ** argv)
{
    #pragma omp parallel 
    {
        while(1){
            foo();

        }
    }
    return 0;
}