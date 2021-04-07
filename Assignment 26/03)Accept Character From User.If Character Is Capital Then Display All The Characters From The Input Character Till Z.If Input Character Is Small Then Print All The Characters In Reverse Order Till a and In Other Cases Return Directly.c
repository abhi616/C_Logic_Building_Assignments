/*
     Input : Q 
     Output : Q R S T U V W X Y Z

     Input : m 
     Output : m l k j i h g f e d c b a

     Input : 8
     Output :  
*/ 


#include <stdio.h>
#include<conio.h>

//Compiler version gcc  6.3.0

void Display(char Ch)
{ 
   if(Ch>=65&&Ch<=90)
    {
      for(;Ch<='Z';Ch++)
       {
         printf("%c ",Ch);
       }
      
    }
    
   else if(Ch>=97&&Ch<=122)
    {
      for(;Ch>='a';Ch--)
       {
         printf("%c ",Ch);
       }
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