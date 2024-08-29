#include <stdio.h>

void main()
{
    int a = 279,*intp;
    float f = 300.12,*fp;
    char t = 'Z', *cp;

    intp = &a;
    fp = &f;
    cp = &t;
    printf("Printing address using & Operator \n");
    printf("Address of a:%p \n",&a);
    printf("Address of f:%p \n",&f);
    printf("Address of t: %p \n", &t);

    printf("Printing address using Pointer Variale \n");
    printf("Address of a:%p \n",intp);
    printf("Address of f:%p \n",fp);
    printf("Address of t: %p \n", cp);

    printf("Printing Value using * Operator \n");
    printf("Value of a:%d \n",*(&a));
    printf("Value of f:%f \n",*(&f));
    printf("Value of t: %c \n", *(&t));

    printf("Printing Value using Pointer Operator \n");
    printf("Value of a:%d \n",*intp);
    printf("Value of f:%f \n",*fp);
    printf("Value of t: %c \n", *cp);
}
