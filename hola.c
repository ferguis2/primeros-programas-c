#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>


int main(){
    int num;
    scanf("%d",&num);
    int i;
    for (i=0; i < num; i++)
    {
        const char *url = "https://www.youtube.com";
        char comando[256];
        #ifdef _WIN32
        sprintf(comando, "start %s", url);
        #endif
        system(comando);
    }
    

}
