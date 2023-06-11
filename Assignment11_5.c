#include<stdio.h>

void DisplayRevRange(int iStart1, int iEnd1)
{
   int iCnt = 0;
   if(iStart1 > iEnd1)
   {
      printf("Invalid range\n");
   }
   for(iCnt = iEnd1; iCnt >= iStart1; iCnt--)
   {
     if(iStart1 <= iEnd1)
     {
        printf("%d\n",iEnd1);
        iEnd1--;
     }
   }
}

int main()
{
   int iStart = 0;
   int iEnd = 0;
   printf("Enter the starting range :\n");
   scanf("%d",&iStart);

   printf("enter end number of range :\n");
   scanf("%d",&iEnd);

   DisplayRevRange(iStart,iEnd);

    return 0;
}