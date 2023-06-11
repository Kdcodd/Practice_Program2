#include<stdio.h>

void DisplayPattern(int iSize1)
{
  int iTable = 2;
  int iTable1 = 0;
  int iCnt = 0;
  for(iCnt  = 1; iCnt <= iSize1; iCnt++)
  {
     iTable1 = iTable * iCnt;      
     printf("%d\t",iTable1);  
  }
}
int main()
{
  int iLength = 0;

  printf("Enter the number of elements in array :\n");
  scanf("%d",&iLength);
  
  DisplayPattern(iLength); 
  return 0;
}