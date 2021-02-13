#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    char *path = getenv("PATH");
    if (path)
    {
        printf("%s\n", path);
         
    }
    return 0;
}
