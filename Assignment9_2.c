#include<stdio.h>

int DollarToInr(int iRupee)
{
 
  int iDollar = 0;
  iDollar = 70 * iRupee;
  return iDollar;
}


int main()
{
   int iValue = 0;
   printf("Enter the money in rupees\n");
   scanf("%d",&iValue);

   int iRet = 0;
   iRet = DollarToInr(iValue);
   printf("Conversion of dolllar to rupees is : %d\n",iRet);

   return 0;
}