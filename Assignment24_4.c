#include<stdio.h>
#include<stdbool.h>

bool CheckSpecialCharacter(char ch)
{
  if((ch >= 'a') && (ch <= 'z'))
  {
      return false;	
  }
  else if((ch >= 'A') && (ch <= 'Z'))
  {
     return false;
  }
  else
  {
     return true;
  }
}
int main()
{
  char cValue = '\0';
  printf("Enter the character :\n");
  scanf("%c",&cValue);

  bool bRet = false;
  bRet = CheckSpecialCharacter(cValue);
  if(bRet == true)
  {
    printf("It is a special character\n");
  }
  else
  {
    printf("It is not a special character\n");
  }
  return 0;
}