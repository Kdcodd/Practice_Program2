#include<stdio.h>

void DisplayPattern(int iSize1)
{
  
  int iCnt = 0;
  for(iCnt  = 1; iCnt <= iSize1; iCnt++)
  {
      printf("%d\t",iCnt);
      printf("*\t");
     
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