#include<stdio.h>
#include<stdbool.h>

bool CheckVowels(char *str)
{
  int iCnt = 0;
  while(*str != '\0')
  {
    if(*str == 'a' || *str == 'e'|| *str == 'i' || *str == 'o' ||*str == 'u')
    {
      return true;
      break;
    }
    str++;
  }
}

int main()
{
  char Arr[20];
  
  printf("Enter the string\n");
  scanf("%[^'\n']s",Arr);
  
  bool bRet = false;
  bRet = CheckVowels(Arr);
  if(bRet == true)
  {
    printf("String contains vowels\n");
  }
  else
  {
    printf("string does not have vowels\n");
  }

  return 0;
}