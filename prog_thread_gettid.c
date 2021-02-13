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

//programme qui fait des threads

int main( int argc, char ** argv)
{
    #pragma omp parallel 
    {
        while(1){
            printf("Attendez !!! thread %ld dans le processus %ld\n", gettid(), getpid());
            sleep(1);

        }
    }
    return 0;
}