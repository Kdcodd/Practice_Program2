#include<stdio.h>

int IndexOfLastOccur(char *str,char ch)
{
  int iCnt = 0;
  int i = 0;
  while(*str != '\0')
  {
     if(*str == ch)
     {
       iCnt = i; 
     } 
     str++;
     i++;
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

  iRet = IndexOfLastOccur(Arr,cValue);
  printf("%d",iRet);
    
  return 0;
}