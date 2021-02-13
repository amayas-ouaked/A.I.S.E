#include <stdio.h>



int main( int argc, char *argv)
{

   /* MPI_Init( &argc , &argv);
    int rank, size;
    MPI_Comm_rank( MPI_COMM_WORLD, &rank);
    MPI_Comm_size( MPI_COMM_WORLD, &size);
    printf("%d/%d \n", rank, size);
    */
#pragma omp parallel{

    while(1){}
}

    /*MPI_Finalize();*/
    return 0;
}