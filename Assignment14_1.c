#include<stdio.h>
#include<stdlib.h>

int SumArrayEven(int Brr[],int iSize)
{
  int iSumEven = 0;
  int iCnt = 0;
  for(iCnt  = 0; iCnt < iSize; iCnt++)
  {
     if(Brr[iCnt] % 2 == 0)
     {
        iSumEven = iSumEven + Brr[iCnt];
     }
  }
  return iSumEven;
}

int SumArrayOdd(int Crr[],int iSize1)
{
  int iSumOdd = 0;
  int iCnt = 0;
  for(iCnt  = 0; iCnt < iSize1; iCnt++)
  {
     if(Crr[iCnt] % 2 != 0)
     {
        iSumOdd = iSumOdd + Crr[iCnt];
     }
  }
  return iSumOdd;
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
  int iRetEven = 0;
  int iRetOdd = 0;
  int iRet = 0;
  iRetEven = SumArrayEven(ptr,iLength);
  iRetOdd = SumArrayOdd(ptr,iLength);
   
  iRet = iRetEven - iRetOdd;
  printf("Difference of sum of even elements and odd elements in an array is : %d\n",iRet);

  return 0;
}