#include<stdio.h>
int CountOdd(int iNo)
{
   int iDigit = 0;
   int iFreq = 0;
   while(iNo != 0)
   {
      iDigit = iNo % 10;
      iNo = iNo / 10;
      if(iDigit % 2 != 0)
      {
          iFreq++;
      }
   }
   return iFreq;   
}

int main()
{
  int iValue = 0;
  printf("Enter the number :\n");
  scanf("%d",&iValue);
  int iRet = 0;

  iRet = CountOdd(iValue);
  printf("count of odd number is : %d\n",iRet);

   return 0;
}