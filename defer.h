#pragma once

// Very rudimentary function, will be improved in the future to handle all functions
void callFunc(void (*f)(void*), void* args[])  
{
    f(args[0]);
}