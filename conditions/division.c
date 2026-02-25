//this program takes student name,class and subject marks and calculate percentage out of it and gives performance scored.
#include <stdio.h>

int main() {
  char name[50];
  int cl;
  float c,f,d,m,e;
  double tot,per;
  printf("enter student name and class:");
  scanf("%s%d",&name,&cl);
  printf("\nenter student marks(C,computer fundamentals,digital logic,mathematics,english) :");
  scanf("%f%f%f%f%f",&c,&f,&d,&m,&e);
  tot= c+f+d+m+e;
  per= (tot/500)*100;
  if(c>=35 && f>=35 && d>=35 && m>=35 && e>=35)
  {
  if (per>=80)
  {
      printf("\nhe/she scored distinction");
  }
  else if(per>=60 && per<80)
  { 
      printf("\nhe/she scored first division");
  }
  else if(per>=45 && per<60)
  {
      printf("\nhe/she scored second division");
  }
  else if(per>=35 && per<45)
  {
      printf("\nhe/she scored pass division");
  }
  }
   else 
  {
      printf("\nhe/she failed.");
  }
  return 0;
}
  
