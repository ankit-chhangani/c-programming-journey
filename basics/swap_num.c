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
// we could swap numbers using xor which is way too cool. 
/* int a = 2;
    int b = 3;
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
 
    printf("%d%d",a,b); */
// we could swap numbers using no temporary variable using arithmetic operation.
/*  int a = 2;
    int b = 3;
    a = a + b;
    b = a - b;
    a = a - b;
 
    printf("%d%d",a,b); */
// we could swap numbers using pointers.
/*  int a = 2;
    int b = 3;
   int *p = &a;
   int c = *p;
   a = b;
   b = c;
    printf("%d%d",a,b); */

