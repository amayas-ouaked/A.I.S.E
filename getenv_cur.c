#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[], char *envp[])
{
    char ** cur = envp;
    do 
    {
        printf("%s\n", *cur);
         
    }while (*cur++);
    
    return 0;
}

