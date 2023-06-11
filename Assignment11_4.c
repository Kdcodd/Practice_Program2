#include<stdio.h>

int AddEvenRange(int iStart1, int iEnd1)
{
   int iSum = 0;
   int iCnt = 0;
   if(iStart1 > iEnd1)
   {
      printf("Invalid range\n");
   }
   for(iCnt = iStart1; iCnt <= iEnd1; iCnt++)
   {
     if(iStart1 <= iEnd1)
     {
        if(iStart1 % 2 == 0)
        {
          iSum = iSum + iStart1;
          
        }
     }
      iStart1++;
   }
   return iSum;
}

int main()
{
   int iStart = 0;
   int iEnd = 0;
   printf("Enter the starting range :\n");
   scanf("%d",&iStart);

   printf("enter end number of range :\n");
   scanf("%d",&iEnd);
   int iRet = 0;

   iRet = AddEvenRange(iStart,iEnd);
   printf("Addition of all even numbers in the range is : %d\n",iRet);

    return 0;
}