/*
  
  Input  :     
           Enter 1st String : String

           Enter 2nd String : concate
  
  Output : 
    
           1st String After Concatenation : Stringcnae

*/

#include <stdio.h>
#include<conio.h>

//Compiler version gcc  6.3.0

void Concate_AltString(char *str1,char *str2)
{
  int i=0,j=0;
  
  for(i=0;str1[i]!='\0';i++);
  
  
  for(j=0;str2[j]!='\0';j++)
  {
    if(j%2==0)
    {
      str1[i]=str2[j];  
      i++;    
    }
    else
    {
      continue;
    }
  }
  
  str1[i]='\0';
  
  return;
}


int main()
{
  char Str1[50],Str2[50];
  
  printf("Enter 1st String : ");
  gets(Str1);
  
  printf("\nEnter 2nd String : ");
  scanf("%[^\n]s",&Str2);
  
  Concate_AltString(Str1,Str2);
  
  printf("\n1st String After Concatenation : %s\n",Str1);
  
  getch();
  return 0;
}