#include<stdio.h>

int EvenFactorial(int iNo)
{
   int iCnt = 0;
   int iFact = 1;
   
   if(iNo < 0)
   {
      iNo = -iNo;
   }
   for(iCnt = 2; iCnt <= iNo; iCnt = iCnt + 2)        //(N/2) 
   {
       if(iCnt % 2 == 0)
       {
          iFact = iFact * iCnt;
       }
   }
   return iFact;
}

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

   
   int iRetEven = 0;
   int iRetOdd = 0;
   iRetOdd = OddFactorial(iValue);
   iRetEven = EvenFactorial(iValue);
   printf("Difference between even factorial and Odd factorial is : %d\n",(iRetEven - iRetOdd));

   return 0;
}