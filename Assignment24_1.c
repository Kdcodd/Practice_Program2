#include<stdio.h>

void DisplayASCIITable()
{ 
   int iCnt = 0;
   for(iCnt = 1;iCnt <= 127; iCnt++)
   {
     printf("%d\t%x\t%c\n",iCnt,iCnt,iCnt);
   }
}

int main()
{
   DisplayASCIITable();

  return 0;
}