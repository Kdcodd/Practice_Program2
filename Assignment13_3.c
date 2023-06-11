#include<stdio.h>
int CountNoBet3And7(int iNo)
{
   int iDigit = 0;
   int iFreq = 0;
   while(iNo != 0)
   {
      iDigit = iNo % 10;
      iNo = iNo / 10;
      if((iDigit > 3) && (iDigit < 7))
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

  iRet = CountNoBet3And7(iValue);
  printf("count of number between 3 and 7 is : %d\n",iRet);

   return 0;
}