#include<stdio.h>

double CalculateArea(double dWidth1, double dHeigth1)
{
  
  double dArea = 0.000;
  dArea = dWidth1 * dHeigth1;
  return dArea;
}
int main()
{
    double dWidth = 0.000;
    printf("Enter the width of rectangle :\n");
    scanf("%lf",&dWidth);
    double dHeight = 0.000;
    printf("Enter the heigth of rectangle :\n");
    scanf("%lf",&dHeight);
   
    double dRet = 0.0f;
    dRet = CalculateArea(dWidth,dHeight);
    printf("Area of Rectngle is : %lf\n",dRet);
   return 0;
}