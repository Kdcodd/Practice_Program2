#include<stdio.h>
#include<stdlib.h>


int ProductArrayOdd(int Crr[],int iSize1)
{
  int iProductOdd = 1;
  int iCnt = 0;
  for(iCnt  = 0; iCnt < iSize1; iCnt++)
  {
     if(Crr[iCnt] % 2 != 0)
     {
        iProductOdd = iProductOdd * Crr[iCnt];
     }
  }
  return iProductOdd;
}
int main()
{
  int iLength = 0;

  printf("Enter the number of elements in array :\n");
  scanf("%d",&iLength);
  
  int *ptr = NULL;

  ptr = (int *)malloc(iLength*sizeof(int));
    
  printf("Enter the elements in array :\n");
  int iCnt = 0;
  for(iCnt = 0;iCnt < iLength; iCnt++)
  {
    scanf("%d",&ptr[iCnt]);
  }

  int iRet = 0;
  iRet = ProductArrayOdd(ptr,iLength); 
  printf("Product of all numbers in array is : %d\n",iRet);
  return 0;
}