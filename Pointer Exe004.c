#include <stdio.h>

void swap (int *, int *);
void change (int **, int *);

int main()
{
    int a = 10,b = 20;

    swap (&a, &b);
    printf("After swap a: %d, b:%d", a, b);
    return 0;
}
void swap (int *aa, int *bb)
{
    /* Here aa = &a and bb = &b hence passing &aa or bb will point to the same variable address a and b*/
    change(&aa,bb);
}
void change(int **aa, int *bb)
{
    int t=0;
    t=**aa;
    **aa= *bb;
    *bb =t;
}
