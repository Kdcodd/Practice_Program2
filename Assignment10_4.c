#include<stdio.h>

double DegToFah(double dFah)
{
  double dTemp = 0.000;
  dTemp = ((dFah - 32) *5)/9;
  return dTemp;
}
int main()
{
   double dValue = 0.000;
   printf("Enter the temperature in fahrenhiet :\n");
   scanf("%lf",&dValue);

   double dRet = 0.000;
   dRet = DegToFah(dValue);
   printf("%lf in fahrehiet is %lf in degree celsius\n",dValue,dRet);
 
   return 0;
}