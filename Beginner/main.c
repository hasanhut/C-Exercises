#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a =5;
    const int b =10;
    const int* x=&a;
    int *const y= &a;
    const int *const z= &b;
    printf("%d=%d",*x=b);
}
