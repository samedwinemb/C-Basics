#include <stdio.h>

int main()
{
    int a=99,b=14,*ptr1,*ptr2;
    ptr1 = &a;
    ptr2 = &b;
    if(*ptr1 < *ptr2)
        printf("%d is the Maximum Number \n",*ptr2);
    else
        printf("%d is the Maximum Number \n",*ptr1);
    return 0;
}
