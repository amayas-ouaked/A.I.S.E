#include <stdio.h>

int main(int argc, char const *argv[])
{
    int i; 
    for ( i = 0; i < argc ; i++)
    {
        printf("%d / %d %s \n",i , argc, argv[i]);
    }
    
    return 0;
}
