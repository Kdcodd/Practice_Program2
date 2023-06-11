#include<stdio.h>

int CountFreqOfUpperCase(char *str)
{
  int iCnt = 0;
  while(*str != '\0')
  {
    if(*str >= 'A'&& *str <= 'Z')
    {
      iCnt++;
    }
    str++;
  }
  return iCnt;
}

int main()
{
  char Arr[20];
  
  printf("Enter the string\n");
  scanf("%[^'\n']s",Arr);
  
  int iRet = 0;
  iRet = CountFreqOfUpperCase(Arr);
  printf("Count of capital letter in a string is : %d\n",iRet);

  return 0;
}