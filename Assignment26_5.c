#include<stdio.h>

int CountWhiteSpaces(char *str)
{
  int iCnt = 0;
  while(*str != '\0')
  {
     if(*str == 32)
     {
        iCnt++;
     } 
     str++; 
  }
  return iCnt;
}

int main()
{
  char Arr[30];
  int iRet = 0;
  printf("Enter the string\n");
  scanf("%[^'\n']s",Arr);

  iRet = CountWhiteSpaces(Arr);
  printf("%d",iRet);
    
  return 0;
}