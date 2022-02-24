#include "profile_funcs.h"

void f1()
{
    for(int i = 0; i < __INT_MAX__; i++);

    return;
}

void f2()
{
    for(int i = 0; i < __INT_MAX__; i++);

    f3();
    return;
}

void f3()
{
    for(int i =0; i < __INT_MAX__; i++);

    return;
}

int main()
{
    f1();

    f2();

    return 0;
}