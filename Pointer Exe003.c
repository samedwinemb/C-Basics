#include <stdio.h>
void swap (int, int);
void change (int , int);

int main()
{

    int c = 10, d = 20;
    printf("we are in main() \n");
    printf("Address of c:%u and d:%u",&c, &d);
    swap (c,d);
    printf("back to main() \n");
    printf("After Swap c:%d d:%d",c,d);
    return 0;
}
void swap(int c , int d)
{
    prinf("In swap() \n");
    printf("Before Swapping c:%d d: %d",c,d);
    printf("Address of c:%u and d:%u" &c,&d);
    change(c,d);
    printf("back to swap() \n");
    printf("After Swap c:%d d:%d",c,d);
}
void change()
{
    int t;
    printf ("We are in change( )....\n");
    printf ("Address of c = %u Address of d = %u\n", &c, &d);
    printf ("Before interchanging, c = %d d = %d\n", c, d);
    t = c;
    c = d;
    d = t;
    printf ("After interchanging, c = %d d = %d\n", c, d);
}
