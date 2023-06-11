#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool CheckEleven(int Brr[],int iSize)
{
  int iCnt = 0;
  int iFrq = 0;
  for(iCnt  = 0; iCnt < iSize; iCnt++)
  {
     if((Brr[iCnt] == 11))
     {
        iFrq++;
     }
  }  
  if(iFrq != 0)
  {
     return true;
  }
  else
  {
     return false;
  }
}


int main()
{
  int iLength = 0;
  bool bRet =false;
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

 
  bRet = CheckEleven(ptr,iLength);
  if(bRet == true)
  {
    printf("11 is present\n");
  }
  else
  {
    printf("11 is not present\n");
  }  

   return 0;
}