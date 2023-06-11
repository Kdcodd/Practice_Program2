#include<stdio.h>
#include<stdlib.h>

int FrequencyOfNo(int Brr[],int iSize,int iNo1)
{
  int iCnt = 0;
  int iFrq = 0;
  for(iCnt  = 0; iCnt < iSize; iCnt++)
  {
     if((Brr[iCnt] == iNo1))
     {
        iFrq++;
     }
  }  
  return iFrq;
}


int main()
{
  int iLength = 0;
  int iNo = 0;
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

  printf("Enter the number to calculate frequency :\n");
  scanf("%d",&iNo);

  int iRet = 0;
 
  iRet = FrequencyOfNo(ptr,iLength,iNo);
  printf("FREQUENCY OF NUMBER IS %d\n",iRet);

  return 0;
}