#include<stdio.h>
#include<stdbool.h>

bool CheckChar(char ch)
{
  if((ch >= 'A') && (ch <= 'Z'))
  {
      return true;
  }
  else if(ch >= 'a' && ch <= 'z')
  {
      return true;
  }
  else
  {
     return false;
  }

}
int main()
{
  char cValue = '\0';
  printf("Enter the character :\n");
  scanf("%c",&cValue);

  bool bRet = false;
  bRet = CheckChar(cValue);
  if(bRet == true)
  {
    printf("character is alphabet\n");
  }
  else
  {
    printf("character is not alphabet\n");
  }
  return 0;
}