#include <stdio.h>

int main() {
    int a,b,c;
    printf("enter any 2 number:");
    scanf("%d%d",&a,&b);
    c = a;
    a = b;
    b = c;
    printf("\n the swapped number are: %d\t%d",a,b);
    return 0;
}
