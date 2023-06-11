#include<stdio.h>

void DisplayChar(char ch)
{
  int iCnt = 0;
  if((ch >= 'A') && (ch <= 'Z'))
  {
     while(ch <= 'Z')  
     {
       printf("%c\n",ch);
       ch++;
     }   
  }
  else if((ch >= 'a') && (ch <= 'z'))
  {
     while(ch >= 'a')
     {
        printf("%c\n",ch);
        ch--;
     }
  }
  else
  {
      printf("%c",ch);
  }
}

int main()
{
  char cValue = '\0';
  printf("Enter the character\n");
  scanf("%c",&cValue);

  DisplayChar(cValue);
  
  return 0;
}