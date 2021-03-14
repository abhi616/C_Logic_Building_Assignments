#include <stdio.h>

//Compiler version gcc  6.3.0

void Display_Convert(char CValue)
{
      
  if(CValue>=65&&CValue<=90)
   {
     printf("\nOutput: %c\n",CValue+32);
   }
  else if(CValue>=97&&CValue<=122)
   {
     printf("\nOutput: %c\n",CValue-32);
   }
  
   
  return;
}

int main()
{
   char cValue='\0';
   
   printf("Enter Character: ");
   scanf("%c",&cValue);
   
   Display_Convert(cValue);
   
  return 0;
}