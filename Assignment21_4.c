#include<stdio.h>

void DisplayPattern(int iSize1 , int iSize2)
{
  int l = -1;
  int k = 1;
  int j = 0;
  int i = 0;
  for(i = 1; i <= ((iSize1 / 2) + 1); i++)
  {
    for(j = 1 ; j <= iSize2; j++)
    {
       printf("%d\t",k);
       k++;      
    }
    printf("\n");
    if(i != 3)
    {
      for(j = 1; j <= iSize2; j++)
      {
         printf("%d\t",l);
         l--;    
      }
      printf("\n");
    }
    k = 1;
    l = -1;
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