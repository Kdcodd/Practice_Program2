#include<stdio.h>

double SqfeetToSqmtr(double dFeet)
{
  double dArea = 0.000;
  dArea = dFeet * 0.0929;
  return dArea;
}
int main()
{
   double dValue = 0.000;
   printf("Enter the area square feet :\n");
   scanf("%lf",&dValue);

   double dRet = 0.000;
   dRet = SqfeetToSqmtr(dValue);
   printf("%lf in square feet is %lf in square meter \n",dValue,dRet);
 
   return 0;
}