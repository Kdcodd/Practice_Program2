#include<stdio.h>

void DisplayPattern(int iSize1 , int iSize2)
{
  int j = 0;
  int i = 0;
  for(i = 1; i <= iSize1; i++)
  {
    for(j = 1; j <= iSize2; j++ )
    {
        printf("%d\t",j);
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