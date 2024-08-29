#include <stdio.h>
int main()
{
    int Max_Num=0;
    int array[Max_Num];
    printf("Enter the Size of Array \n");
    scanf(" %d",&Max_Num);
    printf("Enter the Array Elements");
    for(int i = 0;i<Max_Num;i++)
    {
        printf("Element %d - \n",i);
        scanf("%d",array+i);
    }
    for(int j=0;j<Max_Num;j++)
    {
        printf("Element [%d] is %d \n",j,*(array+j));
    }
    return 0;
}
