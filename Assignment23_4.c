#include<stdio.h>
#include<stdbool.h>

bool CheckSmallCase(char ch)
{
  if((ch >= 'a') && (ch <= 'z'))
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
  bRet = CheckSmallCase(cValue);
  if(bRet == true)
  {
    printf("It is a small case letter\n");
  }
  else
  {
    printf("It is not small case letter\n");
  }
  return 0;
}