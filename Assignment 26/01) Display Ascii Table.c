#include <stdio.h>
#include<conio.h>

//Compiler version gcc  6.3.0

void DisplayAscii()
{ 
   int i=0;
   
   for(i=0;i<=255;i++)
    {
      printf("\n%d %4x %4c ",i,i,i);
    }
   
   return;
}

int main()
{  
 
  DisplayAscii();  
  
  getch();
  
  return 0;
}