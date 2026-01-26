#include<stdio.h>
#include<math.h>

int main()
{
    int a,b,c,d;
    double root1,root2;
    printf("enter a,b,c:");
    scanf("%d%d%d",&a,&b,&c);
    
    if (a==0)
    {
        printf("\nit is not a quadratic equation");
    }
    else
    {
        
        d= (b*b) - (4*a*c);
        if(d>0)
        {
            root1= (sqrt(d) - b) / (2*a);
            root2= (- sqrt(d) - b) / (2*a);
            printf ("\nthe roots of given quadtratic equations are: %lf\t%lf ",root1,root2);
        }
       else if(d == 0)
       {
           root1= -b / (2*a);
           root2= root1;
           printf ("\nthe roots of given quadtratic equations are: %lf\t%lf ",root1,root2);
       }
       else
       {
           printf("\nroots are imaginary/complex");
       }
       retun 0;
       }
            
        
}
