#include<stdio.h>
int SumEven(int iNo)
{
   int iDigit = 0;
   int iSumEven = 0;
   while(iNo != 0)
   {
      iDigit = iNo % 10;
      iNo = iNo / 10;
      if(iDigit % 2 == 0)
      {
          iSumEven = iSumEven + iDigit;
      }
   }
   return iSumEven;   
}
int SumOdd(int iNo)
{
   int iDigit = 0;
   int iSumOdd = 0;
   while(iNo != 0)
   {
      iDigit = iNo % 10;
      iNo = iNo / 10;
      if(iDigit % 2 != 0)
      {
          iSumOdd = iSumOdd + iDigit;
      }
   }
   return iSumOdd;   
}
int main()
{
  int iValue = 0;
  printf("Enter the number :\n");
  scanf("%d",&iValue);
  int iRet = 0;
  int iRetEven = 0;
  int iRetOdd = 0;

  iRetEven = SumEven(iValue);
  iRetOdd = SumOdd(iValue);
  iRet = iRetEven - iRetOdd;
  printf("Difference of even digits and odd digits is : %d\n",iRet);

   
   return 0;
}