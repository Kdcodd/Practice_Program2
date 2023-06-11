#include<stdio.h>

void DisplayRange(int iStart1, int iEnd1)
{
   int iCnt = 0;
   if(iStart1 > iEnd1)
   {
      printf("Invalid range\n");
   }
   for(iCnt = iStart1; iCnt <= iEnd1; iCnt++)
   {
     if(iStart1 <= iEnd1)
     {
        printf("%d\n",iStart1);
        iStart1++;
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

   DisplayRange(iStart,iEnd);

    return 0;
}