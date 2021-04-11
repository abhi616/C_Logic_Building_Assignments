#include <stdio.h>
#include<conio.h>
#include<string.h>

//Compiler version gcc  6.3.0

void StrCatX(char *Src,char *Dest)
{
  
  while(*Src!='\0')     //Traverse first string till end
  {
     Src++;
  } 
 
  *Src=Dest;
  
  while(*Dest!='\0')    //copy the contents of destination in source
  {
    *Src=*Dest;    
     Dest++;
     Src++;
  }  
  
  *Src='\0';
  
  return;
}

int main()
{
  char Str1[30]="Marvellous ";
  char Str2[30]="Multi OS";
  
  printf("\nString Before Concatenation = %s\n",Str1);
  
  StrCatX(Str1,Str2);
 
  printf("\nString After Concatenation = %s\n",Str1);
  
  getch();
  return 0;
}