#include<stdio.h>

void DisplayDigRev(int iNo)
{
   int i = 0;
   int iDigit = 0;
   if(iNo < 0)
   {
      iNo = -iNo;
   }
   while(iNo != 0)
   {
      iDigit = iNo % 10;
      iNo = iNo / 10;
      printf("%d\n",iDigit);
   }
}

int main()
{
  int iValue = 0;
  printf("Enter the number :\n");
  scanf("%d",&iValue);
  
  DisplayDigRev(iValue);

   return 0;
}