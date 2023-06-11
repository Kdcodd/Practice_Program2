#include<stdio.h>
#include<stdbool.h>

bool CheckDigit(char iNo)
{
  if((iNo >= 48) && (iNo <= 57))
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
  printf("Enter the one character :\n");
  scanf("%c",&cValue);

  bool bRet = false;
  bRet = CheckDigit(cValue);
  if(bRet == true)
  {
    printf("It is a digit\n");
  }
  else
  {
    printf("It is not digit\n");
  }
  return 0;
}