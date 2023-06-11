#include<stdio.h>

void ChangeCase(char ch)
{
  if(((ch >= 'A') && (ch <= 'Z')))
  {
    ch = ch + 32;
    printf("lower case of given character is %c\n",ch); 
  }
  else if((ch >= 'a') && (ch <= 'z'))
  {
    ch = ch - 32;
    printf("upper case of given character is %c\n",ch);
  }
  else
  {
    printf("%c\n",ch);
  }
}

int main()
{
  char cValue = '\0';
  printf("Enter the character\n");
  scanf("%c",&cValue);

  ChangeCase(cValue);
  
  return 0;
}