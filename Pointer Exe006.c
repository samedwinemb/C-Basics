#include <stdio.h>
float* multiply(int, float);
int main()
{

    int i =  3;
    float f = 3.50, *prod;
    prod = multiply(i,f);
    printf("Prod : %u Value at address %f",prod,*prod);
}
float* multiply(int ii, float ff)
{
    float product;
    product = ii*ff;
    printf("product: %f, address of product %u", product, &product);
    return (&product);
}
