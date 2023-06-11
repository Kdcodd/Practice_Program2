#include<stdio.h>
#include<stdbool.h>

bool CheckCharacter(char *str,char ch)
{
  int iCnt = 0;
  while(*str != '\0')
  {
    if(*str == ch)
    {
      iCnt++;
      break;
    }
    str++;
  }
  if(iCnt != 0)
  {
    return true;
  }
  else
  {
    false;
  }
}

int main()
{
  char Arr[20];
  char cValue = '\0';
  printf("Enter the string\n");
  scanf("%[^'\n']s",Arr);
  
  printf("Enter the character to check\n");
  scanf(" %c",&cValue);

  bool bRet = false;
  bRet = CheckCharacter(Arr,cValue);
  if(bRet == true)
  {
    printf("character is present\n");
  }
  else
  {
    printf("character is not present\n");
  }

  return 0;
}