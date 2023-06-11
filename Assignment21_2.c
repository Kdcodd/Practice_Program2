#include<stdio.h>

void DisplayPattern(int iSize1 , int iSize2)
{
  int l = 1;
  int k = 2;
  int j = 0;
  int i = 0;
  for(i = 1; i <= (iSize1 / 2); i++)
  {
    for(j = 1 ; j <= iSize2; j++)
    {
      
      if(k % 2 == 0)
      {
         printf("%d\t",k);
      }
      k = k + 2;
    }
    printf("\n");
    for(j = 1; j <= iSize2; j++)
    {
       if( l % 2 != 0)
       {
         printf("%d\t",l);
       }
       l = l + 2; 
    }
    printf("\n");
    k = 2;
    l = 1;
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