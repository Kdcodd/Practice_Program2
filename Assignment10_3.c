#include<stdio.h>

int KmToMtr(int iKm)
{
  int iMtr = 0;
  iMtr = 1000 * iKm;
  return iMtr;
}
int main()
{
   int iValue = 0;
   printf("Enter the distance in kilometer\n");
   scanf("%d",&iValue);

   int iRet = 0;
   iRet = KmToMtr(iValue);
   printf("%d kilometer means %d meter\n",iValue,iRet);
   return 0;
}