#include<stdio.h>       //2N

void Display(int iSize)
{
   int iCnt = 0;
   for(iCnt = 1; iCnt <= iSize; iCnt++)
   {
     printf("*\t");
   }
   for(iCnt = 1; iCnt <= iSize; iCnt++)
   {
     printf("#\t");
   }
}


int main()
{
  int iValue = 0;
  printf("Enter the number\n");
  scanf("%d",&iValue);

  Display(iValue);

  return 0;
}