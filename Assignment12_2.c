#include<stdio.h>
#include<stdbool.h>

bool CheckZero(int iNo)
{
   int iDigit = 0;
   while(iNo != 0)
   {
      iDigit = iNo % 10;
      iNo = iNo / 10;
      if(iDigit == 0)
      {
         return true;
         break; 
      }          
   }   
}

int main()
{
  int iValue = 0;
  printf("Enter the number :\n");
  scanf("%d",&iValue);
  bool bRet = false;
  bRet = CheckZero(iValue);
  if(bRet == true)
  {
     printf("It contains Zero\n");
  }
  else
  {
     printf("It does not contains zero\n");
  }

   return 0;
}