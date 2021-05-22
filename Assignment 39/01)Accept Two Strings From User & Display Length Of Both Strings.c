/*
  
  Input  : 
          Enter 1st String : practical

          Enter 2nd String : Demo

  Output :

           1st String Length = 9

           2nd String Length = 4

*/

#include <stdio.h>
#include<conio.h>

//Compiler version gcc  6.3.0

void Calculate_Length(char *str1,char *str2)
{
  int i=0,Len1=0,Len2=0;
  
  for(i=0;str1[i]!='\0';i++);
  
  Len1=i--;
  
  for(i=0;str2[i]!='\0';i++);
  
  Len2=i--;
  printf("\n************************\n");
  
  printf("\n1st String Length = %d\n\n2nd String Length = %d",Len1,Len2);
  
  printf("\n\n************************\n");
  
  return;
  
}


int main()
{
  char Str1[40],Str2[40];
  
  printf("Enter 1st String : ");
  gets(Str1);
  
  printf("\nEnter 2nd String : ");
  scanf("%[^\n]s",&Str2);
  
  Calculate_Length(Str1,Str2);
  
  getch();
  return 0;
}