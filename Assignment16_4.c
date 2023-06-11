#include<stdio.h>
#include<stdlib.h>

void DisplayThreeDigitNumber(int Brr[],int iSize)
{
  int iCnt = 0;
  	
  int iDigit = 0;
  int iFrq = 0;
  printf("Three digit numbers are : \n");
  for(iCnt  = 0; iCnt < iSize; iCnt++)
  {
    int iNo = Brr[iCnt];
    while(iNo != 0)
    {
       iDigit = iNo % 10;
       iFrq++;
       iNo = iNo / 10;    
    }
    if(iFrq == 3)
    {
       printf("%d\n",Brr[iCnt]);
       
    }
    iFrq = 0;
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
  DisplayThreeDigitNumber(ptr,iLength);
  
  free(ptr);

  return 0;
}                                                                                                                                                                                                                                                                                                       