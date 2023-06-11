#include<stdio.h>

void DisplayPattern(int iSize1)
{
  char ch = 'A'; 
  int iCnt = 0;
  for(iCnt  = 0; iCnt < iSize1; iCnt++)
  {
     printf("%c\t",ch);
     printf("#\t");
     ch++;       
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