/**Program to find the simple interest **/
#include <stdio.h>   /** Pre processor **/
int main()  // function syntax:   return type function name (function argument)
{
    // p, n , r , si
    // format specifiers  int %d float %f double %lf char %c string %s
    int P=0;
    float N=0,R=0,S_I=0;
    //get the input from the user
    printf("Enter the Amount, Years and RoI\n");
    scanf("%d %f %f",&P,&N,&R);
    S_I= ((P*N*R)/100);
    printf("SI for Amount %d for %0.2f years @ %0.2f RoI is %0.2f \n",P,N,R,S_I);
    return 5;

}

