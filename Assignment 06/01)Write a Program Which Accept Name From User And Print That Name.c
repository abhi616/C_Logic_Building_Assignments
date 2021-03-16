#include <stdio.h>

//Compiler version gcc  6.3.0


int main()
{
   char Name[30];
   
   printf("Enter Name: ");
   scanf("%[^\n]",&Name);
   
     
   printf("\nYour Name is %s\n",Name);
 
   return 0;
}