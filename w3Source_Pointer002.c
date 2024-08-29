#include <stdio.h>

int main()
{
    int m = 29;
    int *ab;
    ab = &m;
    printf("Address of ab:%p \n",&ab);
    printf("Value of ab:%u \n",*ab);
    m = 10;
    printf("Address of ab:%p \n",&ab);
    printf("Value of ab:%u \n",*ab);
    m = 5;
    printf("Address of ab:%p \n",&ab);
    printf("Value of ab:%u \n",*ab);
    return 0;
}

