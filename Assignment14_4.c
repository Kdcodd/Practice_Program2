#include<stdio.h>
#include<stdlib.h>

void DisplayNumberDivByFiveAndThree(int Brr[],int iSize)
{
  int iCnt = 0;
  printf("Numbers which are divisible by five and even are :\n");
  for(iCnt  = 0; iCnt < iSize; iCnt++)
  {
     if((Brr[iCnt] % 5 == 0) && Brr[iCnt] % 3 == 0)
     {
        printf("%d\n",Brr[iCnt]);
     }
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
  
  DisplayNumberDivByFiveAndThree(ptr,iLength);

  return 0;
}