#include <stdio.h>

int main()
{
    int a[10]={12,5,7,80,21,32,56,90,65,19};
    int i,j,temp,k;
    printf("The Entered Array is \n");
    for(k=0;k<10;k++)
        printf("%d\t",a[k]);
        printf("\n");
    for(i=0;i<10;++i)
    {
        for(j=i+1;j<10;++j)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    for(i=0;i<10;i++)
    printf("%d\t",a[i]);
}
