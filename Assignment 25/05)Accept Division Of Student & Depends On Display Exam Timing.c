/*
    Input : C 
    Output : Your exam at 9.20 AM 

    Input : d 
    Output : Your exam at 10.30 AM
*/


#include <stdio.h>
#include<conio.h>

//Compiler version gcc  6.3.0


void DisplaySchedule(char ChDiv)
{
  
   switch(ChDiv)
   {
     case 'A':
     case 'a':
              printf("\nYour exam at 7 AM\n");
              break;
              
     case 'B':
     case 'b':
              printf("\nYour exam at 8:30 Am\n");
              break;
     
     case 'C':
     case 'c':
              printf("\nYour exam at 9:20 AM\n");
              break;
              
     case 'D':
     case 'd':
              printf("\nYour exam at 10:30 AM\n");
              break;
     default:
             printf("\nYou Entered Invalid Division...!\n");
             break;
                                     
   }
   
   return;
}

int main()
{
  char cValue='\0';  
  
  printf("Enter Your Division: ");
  scanf("%c",&cValue);
  
  DisplaySchedule(cValue);
  
  getch();
  
  return 0;
}