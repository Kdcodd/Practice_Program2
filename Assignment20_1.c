#include<stdio.h>

void DisplayPattern(int iSize1 , int iSize2)
{
  char ch = 'A';
  int j = 0;
  int i = 0;
  for(i = 0; i <= iSize1; i++)
  {
    ch ='A';
    for(j = 1; j <= iSize2 ; j++ )
    {
         printf("%c\t",ch);       
         ch++;
    }
    printf("\n");   
  }
}
int main()
{
  int iRows = 0;
  int iColumn = 0;
  
  printf("Enter the number of rows :\n");
  scanf("%d",&iRows);
  printf("Enter the number of column :\n");
  scanf("%d",&iColumn);

  DisplayPattern(iRows,iColumn); 
  return 0;
}