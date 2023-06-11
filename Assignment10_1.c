#include<stdio.h>

float CalculateArea(float fValue)
{
  float PI = 3.14f;
  float fArea = 0.0f;
  fArea = PI * fValue * fValue;
  return fArea;
}
int main()
{
    float fRadius = 0.0f;
    printf("Enter the radius of circle :\n");
    scanf("%f",&fRadius);
   
    float fRet = 0.0f;
    fRet = CalculateArea(fRadius);
    printf("radius of circle is : %f\n",fRet);
   return 0;
}