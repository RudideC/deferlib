#include "defer.h"
#include <stdio.h>

void print(char* str)  
{
    printf("%s", str);
}
int main(void){
    void* args[] = {"Hello, World!"};
    callFunc((void (*)(void*))print, args);
    return 0;
}
