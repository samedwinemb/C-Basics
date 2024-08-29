/**Program to explain about pointers**/
/**Intro
Pointer is a variable , that holds the address of the variable it points
for eg:
    int a=20;
    int *ptr; --> pointer variable
    ptr=&a;--> it denotes the address of the another variable
    * --> Dereferencing Operator
*/

    #include <stdio.h>
    int main()
{
    int a=20;
    int *ptr;
    ptr=&a;
    printf("%d \n",*ptr);
    return 0;
}
