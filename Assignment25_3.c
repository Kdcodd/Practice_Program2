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
  int iRet1 = 0;
  int iRet2 = 0;
  iRet1 = CountFreqOfUpperCase(Arr);
  iRet2 = CountFreqOfLowerCase(Arr);
  iRet = iRet2 - iRet1;

  printf("Difference between count of small letter and capital letter in a string is : %d\n",iRet);

  return 0;
}