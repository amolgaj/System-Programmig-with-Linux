#include <stdio.h>
#include "mymath.h"
int main(){
   double x, y ;
   printf("Enter first number: ");
   scanf("%lf",&x);
   printf("Enter second number: ");
   scanf("%lf",&y);
   double c = myadd(x,y);
   double d = mysub(x,y);
   printf("x + y = %7.2lf\n",c);
   printf("x - y = %7.2lf\n",d);
   return 0;
}
