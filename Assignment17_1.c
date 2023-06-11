#include<stdio.h>
#include<stdlib.h>

void CheckNumber(int Arr[],int iLength1, int iNo1)
{
   int iFrq = 0;
   int iCnt = 0;
   for(iCnt = 0; iCnt < iLength1; iCnt++)
   {
     if(Arr[iCnt] == iNo1)
     {
        iFrq++;
     }
   }
   if(iFrq != 0)
   {
       printf("Number is present\n");
   }
   else
   {
      printf("Number is not presesnt\n");
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
  int iNo = 0;
  printf("Enter number to check whether present or not\n");
  scanf("%d",&iNo);
   
  CheckNumber(ptr,iLength,iNo);

  free(ptr);

  return 0;
}