#include <stdio.h>
int a, b, c = 0;
void prtFun (void);
int main ()
{
    auto int a = 1; /* line 1 */
    prtFun();
    a += 1;
    prtFun();
    printf ( "n %d %d " , a, b) ;
}

void prtFun (void)
{
    register int a = 2; /* line 2 */
    int b = 1;
    a += ++b;
    printf (" n %d %d " , a, b);
}
