#include <stdio.h>

int main()
{
     int a = 2434;
    float *ptr;
    printf(" Address of ptr is %lu and Address of Var is %u \r \n",&ptr, &a);
    ptr= &a;
    printf("Value at ptr is %f address is %u and Var is %u",*ptr,&ptr,&a);

    return 0;
}
