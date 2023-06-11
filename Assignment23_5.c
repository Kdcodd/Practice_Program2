include<stdio.h>

void DisplayExamTime(char ch)
{
   if(ch == 'A' || ch == 'a')
   {
      printf("Your exam time is at 7 AM\n");
   }
   else if (ch == 'B' || ch == 'b')
   {
      printf("Your exam time is at 8:30 AM\n");
   }
   else if (ch == 'C' || ch == 'c')
   {
      printf("Your exam time is at 10 AM\n");
   }
   else if(ch == 'D'|| ch == 'd')
   {
      printf("Your exam time is at 11:30 AM\n");
   }
   else
   {
      printf("Your exam time is at 12 PM\n");
   }
}

int main()
{
  char cDiv = '\0';
  printf("Please enter your division\n");
  scanf("%c",&cDiv);

  DisplayExamTime(cDiv);

  return 0;
}