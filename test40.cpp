#include"ainclude.h"
#define MAX 20
#define PRINTCONSOLE(error) printf("error code :%d",(int)error);
#ifndef ENDL
    #define ENDL "\n"
#endif
#ifdef lsz 
    PRINTCONSOLE(lsz);
#endif
#define lsz
#undef lsz 

void DEBUG(){
    std::cout<<"DATE "<<__DATE__<<ENDL;
    std::cout<<"FILE "<<__FILE__<<ENDL;
    std::cout<<"LINE "<<__LINE__<<ENDL;
    std::cout<<"TIME "<<__TIME__<<ENDL;
}

int main(){
#if 0 
    printf("CNM\n");
#endif
    DEBUG();
}


