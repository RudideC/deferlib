#include <stdio.h>

void print(char* str)  
{
    printf("%s", str);
}
void helloworld(void (*f)(void*), void* args[])  
{
    f(args[0]);
}
int main(void)  
{
    void* args[] = {"Hello, World!"};
    helloworld((void (*)(void*))print, args);
    return (0);
}