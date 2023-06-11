#include<stdio.h>

void ConvertingToLowerCase(char *str)
{
  while(*str != '\0')
  {
    if(*str == 32)
    {
      printf(" ");
      str++;
    } 
    if(((*str >= 'A') && (*str <= 'Z')))
    {
       *str = *str + 32;
        printf("%c",*str); 
    }
    str++;
  }
}

int main()
{
  char Arr[20];
  
  printf("Enter the string\n");
  scanf("%[^'\n']s",Arr);

  ConvertingToLowerCase(Arr);
    
  return 0;
}