/*
     Input : Q 
     Output : q 

     Input : m 
     Output : M 

     Input : 4 
     Output : 4 
*/ 


#include <stdio.h>
#include<conio.h>

//Compiler version gcc  6.3.0

void Display(char Ch)
{ 
   if(Ch>=65&&Ch<=90)
    {
      printf("\nCharacter = %c\n",Ch+32);
    }
   else if(Ch>=97&&Ch<=122)
    {
      printf("\nCharacter = %c\n",Ch-32);
    }
   else
    {
      printf("\nCharacter = %c\n",Ch);
    }
    
   return;
}

int main()
{  
  char cValue='\0';
  
  printf("Enter Character: ");
  scanf("%c",&cValue);
  
  Display(cValue);  
  
  getch();
  
  return 0;
}