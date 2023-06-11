#include<stdio.h>
#include<stdlib.h>

void DisplayLastOccuranceNumber(int Arr[],int iLength1, int iNo1)
{
   int iCnt = 0;
   printf("Last occcurance of number is :\n");
   for(iCnt = (iLength1-1); iCnt >= 0; iCnt--)
   {
     if(Arr[iCnt] == iNo1)
     {
        printf("%d\n",iCnt);
        break;
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
  int iNo = 0;
  printf("Enter number to check whether present or not\n");
  scanf("%d",&iNo);
   
  DisplayLastOccuranceNumber(ptr,iLength,iNo);

  free(ptr);

  return 0;
}