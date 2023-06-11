#include<stdio.h>
int CheckTwo(int iNo)
{
   int iDigit = 0;
   int iFreq = 0;
   while(iNo != 0)
   {
      iDigit = iNo % 10;
      iNo = iNo / 10;
      if(iDigit == 2)
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

  iRet = CheckTwo(iValue);
  printf("frequency of two is : %d\n",iRet);

   return 0;
}