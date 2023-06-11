#include<stdio.h>
#include<stdlib.h>

void SumEachDigit(int Brr[],int iSize)
{
  int iCnt = 0;
  int iDigit = 0;
  int iSum = 0;
  printf("Addition of Digits of each number is: \n");
  for(iCnt  = 0; iCnt < iSize; iCnt++)
  {
    int iNo = Brr[iCnt];
    while(iNo != 0)
    {
       iDigit = iNo % 10;
       iSum = iSum + iDigit;
       iNo = iNo / 10;    
    }
    printf("%d\n",iSum);
    iSum = 0;
  }  
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
  SumEachDigit(ptr,iLength);
  
  free(ptr);

  return 0;
}                                                                                                                                                                                                                                                                                                       