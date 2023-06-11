#include<stdio.h>
#include<stdlib.h>

int DisplayLargestNumber(int Brr[],int iSize)
{
  int iCnt = 0;
  int iMax = 0;
  for(iCnt  = 0; iCnt < iSize; iCnt++)
  {
     if((Brr[iCnt] > iMax))
     {
        iMax = Brr[iCnt];
     }
  }  
  return iMax;
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
 
  iRet = DisplayLargestNumber(ptr,iLength);
  printf("Largest Number Is %d\n",iRet);

  return 0;
}