#include<stdio.h>

int OddFactorial(int iNo)
{
   int iCnt = 0;
   int iOddFact = 1;
   
   if(iNo < 0)
   {
      iNo = -iNo;
   }
   for(iCnt = 1; iCnt <= iNo; iCnt = iCnt + 2)         //(N/2) 
   {
       if(iCnt % 2 != 0)
       {
          iOddFact = iOddFact * iCnt;
       }
   }
   return iOddFact;
}


int main()
{
   int iValue = 0;
   printf("Enter the number\n");
   scanf("%d",&iValue);

   int iRet = 0;
   iRet = OddFactorial(iValue);
   printf("Odd factorial is : %d\n",iRet);

   return 0;
}