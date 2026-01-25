
#include <stdio.h>

int main() {
    int a,b,sum,difference,product;
    float quotient,remainder;
    printf("enter any two number=");
    scanf("%d%d",&a,&b);
    sum = a+b;
    difference = a-b;
    product = a*b;
    quotient = a/b;
    remainder = a%b;
    printf("\n the required calculations are: \n the sum=%d\n the difference=%d\n the product=%d\n the quotient=%.2f\n the remainder=%.2f\n",sum,difference,product,quotient,remainder);
    return 0;
}
