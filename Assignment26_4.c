#include<stdio.h>

void ConvertingToUpperCase(char *str)
{
  while(*str != '\0')
  {
     if((*str >= 48) && (*str <= 57))
     {
        printf("%c",*str);
     } 
     str++; 
  }
}

int main()
{
  char Arr[30];
  
  printf("Enter the string\n");
  scanf("%[^'\n']s",Arr);

  ConvertingToUpperCase(Arr);
    
  return 0;
}