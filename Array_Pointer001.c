#include <stdio.h>

void Display1(int);
void Display2 (int*);

int main()
{
    int Marks[]={99,45,56,87,98,90,50,88,66,44};

    int Num_of_Elements = (sizeof(Marks)/sizeof(int));
    for(int i = 0; i<Num_of_Elements;i++)
    {
        Display1(Marks[i]);
    }
    for (int j = 0;j<Num_of_Elements;j++)
    {
          Display2(&Marks[j]);
    }
    return 0;

}

void Display1(int n)
{
    printf("%d \t",n);
}

void Display2 (int *m)
{

    printf("%d \n",*m);
}
