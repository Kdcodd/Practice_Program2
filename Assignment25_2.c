#include<stdio.h>

int CountFreqOfLowerCase(char *str)
{
  int iCnt = 0;
  while(*str != '\0')
  {
    if(*str >= 'a'&& *str <= 'z')
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
  iRet = CountFreqOfLowerCase(Arr);
  printf("Count of small letter in a string is : %d\n",iRet);

  return 0;
}