#include <stdio.h>
void addNum(long*, long*);
int main()
{
    int a = 17,b = 15;
    long *Ap,*Bp,*sum;
    Ap = &a;
    Bp = &b;
   // *sum = *Ap+*BP
    printf("CBV:Sum of 2 Numbers: %d \n",*Ap+*Bp);
    addNum(Ap,Bp);
    return 0;
}

void addNum(long *c, long*d)
{
    printf("CBR:Sum of 2 Numbers : %d \n",*c+*d);
}
/**** Excersise 4******
  /*int a = 17,b = 15,*Ap,*Bp;
    Ap = &a;
    Bp = &b;
    printf("The Sum of 2 Numbers: %d \n",*Ap+*Bp);
    return 0; */

