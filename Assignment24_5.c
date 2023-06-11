#include<stdio.h>

void DisplayASCIIValue(char ch)
{ 
   printf("%d\t%x\t%o\n",ch,ch,ch);
}

int main()
{
   char cValue = '\0';
   printf("Enter the character\n");
   scanf("%c",&cValue);

   DisplayASCIIValue(cValue);

  return 0;
}