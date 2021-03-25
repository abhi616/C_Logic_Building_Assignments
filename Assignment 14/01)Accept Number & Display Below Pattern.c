/*
  Input : 5 
  Output : A B C D E
*/


#include <stdio.h>

//Compiler version gcc  6.3.0

void Pattern(int iNo)
{
  
   int i=0;
   char Ch="\0";
   
   for(Ch='A';i<iNo;i++,Ch++)
    {
      printf("%c ",Ch);
    }
  
   return;
}

int main()
{
  int iValue=0;
  
  printf("Enter Number: ");
  scanf("%d",&iValue);
  
  Pattern(iValue);
  
  return 0;
}