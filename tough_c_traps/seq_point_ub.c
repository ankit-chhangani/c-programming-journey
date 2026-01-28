
#include <stdio.h>

int main() {
  int x=1;
  int y= x++ + ++x + x--; /* this expression modify x multiple times and there isn't any sequence point in between so it is undefined behaviour as this program doesn't have any valid output */
  
  /* correct way to approach this program is:
  y = x;
  x++;
  y = y + x;
  x++;
  y = y + x;
  x--;
  */
 
      printf("%d %d",x,y);
      
  
    return 0;
}
