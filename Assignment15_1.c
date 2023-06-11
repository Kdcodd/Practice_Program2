#include<stdio.h>
#include<stdlib.h>

int FrequencyOfEvenNumber(int Brr[],int iSize)
{
  int iCnt = 0;
  int iFrq = 0;
  for(iCnt  = 0; iCnt < iSize; iCnt++)
  {
     if((Brr[iCnt] % 2 == 0))
     {
        iFrq++;
     }
  }  
  return iFrq;
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
 
  iRet = FrequencyOfEvenNumber(ptr,iLength);
  printf("FREQUENCY OF EVEN NUMBER IS %d\n",iRet);

  return 0;
}