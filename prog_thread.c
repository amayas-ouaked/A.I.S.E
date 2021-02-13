#include <stdio.h>
#include <unistd.h>
#include <omp.h>

//programme qui fait des threads

int main( int argc, char ** argv)
{
    #pragma omp parallel 
    {
        while(1){
            printf("Attendez !!! \n");
            sleep(1);

        }
    }
    return 0;
}