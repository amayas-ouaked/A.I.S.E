#include <signal.h>

int main( int argc, char ** argv)
{
    sigset_t blk;
    sigset_t sigsv;
    
    sigemptyset(&blk);
    sigaddset(&blk, SIGINT);
    
    sigprocmask(SIG_BLOCK, &blk);
    
    while(1){}

    return 0;
}