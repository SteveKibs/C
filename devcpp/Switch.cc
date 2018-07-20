/*usign switch statement in the grading for an Academic institution*/
#include<stdio.h>
#include<conio.h>
main()
{
      char grade;
      index=marks/10;
      switch(index)
{
      case 10:
           case 9:
                case 8:
                     grade='H';
                     printf("Grade is Honours");
break;
case 7:
     case 6:
          grade=F'
printf("Grade is first Division");
break;
case 5:
     grade='S';
     printf("Grade is second Division");
     break;
     case 4:
          printf("Grade is Third Division");
break;
default:
        grade='X';
printf("Grade is Fail");
break;
}
getch();
}
