#include <stdio.h>
//#include <mymath.h>
int main(){
   double x, y,ans1,ans2,ans3,ans4;
   printf("Enter first number: ");
   scanf("%lf",&x);
   printf("Enter second number: ");
   scanf("%lf",&y);
   /*double ans1 = myadd(x,y);
   double ans2 = mysub(x,y);
   double ans3 = mymul(x,y);
   double ans4 = mydiv(x,y);*/
   printf("x + y = %7.2lf\n",ans1);
   printf("x - y = %7.2lf\n",ans2);
   printf("x * y = %7.2lf\n",ans3);
   printf("x/y   = %7.2lf\n",ans4);
   return 0;
}
