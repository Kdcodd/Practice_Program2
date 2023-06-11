#include<stdio.h>

int IndexOfFirstOccur(char *str,char ch)
{
  int iCnt = 0;
 
  while(*str != '\0')
  {
     if(*str == ch)
     {
      break; 
     } 
     str++;
     iCnt++;
  }
  return iCnt;
}

int main()
{
  char Arr[30];
  int iRet = 0;
  char cValue = '\0';

  printf("Enter the string\n");
  scanf("%[^'\n']s",Arr);

  printf("Character to check is :\n");
  scanf(" %c",&cValue);

  iRet = IndexOfFirstOccur(Arr,cValue);
  printf("%d",iRet);
    
  return 0;
}