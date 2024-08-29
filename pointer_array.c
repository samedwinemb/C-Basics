#include <stdio.h>

int main()
{
    int array[5]={10,20,30,40,50};
    int *ptr;
    ptr=&array; // &array denotes the base address of the array
    for(int i=0;i<5;i++)
        printf("%d  %x\n",*(ptr+i),(ptr+i));
    return 0;
}
