#include<stdio.h>

void ConvertingToUpperCase(char *str)
{
  while(*str != '\0')
  {
    if(*str == 32)
    {
      printf(" ");
    } 
    else if((*str >= 'a' && *str <= 'z'))
    {
       *str = *str - 32;
        printf("%c",*str);
    }
    else
    {  
       *str = *str + 32;
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