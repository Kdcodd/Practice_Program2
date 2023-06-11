#include<stdio.h>

int EvenFactorial(int iNo)
{
   int iCnt = 0;
   int iFact = 1;
   
   if(iNo < 0)
   {
      iNo = -iNo;
   }
   for(iCnt = 2; iCnt <= (iNo); iCnt = iCnt + 2)        //N/2
   {
       if(iCnt % 2 == 0)
       {
          iFact = iFact * iCnt;
       }
   }
   return iFact;
}


int main()
{
   int iValue = 0;
   printf("Enter the number\n");
   scanf("%d",&iValue);

   int iRet = 0;
   iRet = EvenFactorial(iValue);
   printf("Even factorial is : %d\n",iRet);

   return 0;
}