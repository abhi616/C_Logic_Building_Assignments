/*
     Input : A
     Output : Decimal  65
     
              Octal 0101 
              
              Hexadecimal 0X41     
*/ 


#include <stdio.h>
#include<conio.h>

//Compiler version gcc  6.3.0

void Display(char Ch)
{ 
   printf("\nChar | Decimal | Octal | Hexadecimal \n %-3c | %-7d | %-5o | %-5x\n",Ch,Ch,Ch,Ch);
    
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