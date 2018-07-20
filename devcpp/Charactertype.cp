#include<stdio.h>
#include<conio.h>
#include<ctype.h>
main()
{
      char character;
      printf("Press any key\n");
      character=getchar();
      if(isalpha(character)>0) /*Test the character*/
printf("The character is a letter");
else
if(isdigit(character)>0)
printf("The character is Digit");

else
printf("The character is not Alphanumeric");
getch();
}
