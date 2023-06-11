#include<stdio.h>
int MultDig(int iNo)
{
   int iDigit = 0;
   int iMult = 1;
   while(iNo != 0)
   {
      iDigit = iNo % 10;
      iNo = iNo / 10;
      if(iDigit == 0)
      {
        iDigit = iDigit + 1;  
      }
      iMult = iMult * iDigit; 
   }
   return iMult;   
}

int main()
{
  int iValue = 0;
  printf("Enter the number :\n");
  scanf("%d",&iValue);
  int iRet = 0;

  iRet = MultDig(iValue);
  printf("Multiplication of digits of number is : %d\n",iRet);

   return 0;
}