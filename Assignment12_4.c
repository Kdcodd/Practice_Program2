#include<stdio.h>
int CheckFour(int iNo)
{
   int iDigit = 0;
   int iFreq = 0;
   while(iNo != 0)
   {
      iDigit = iNo % 10;
      iNo = iNo / 10;
      if(iDigit == 4)
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

  iRet = CheckFour(iValue);
  printf("frequency of four is : %d\n",iRet);

   return 0;
}