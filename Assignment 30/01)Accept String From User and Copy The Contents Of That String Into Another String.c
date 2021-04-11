#include <stdio.h>
#include<conio.h>
#include<string.h>

//Compiler version gcc  6.3.0

void StrCpyX(char *Src,char *Dest)
{
  int i=0,j=0;
  
  for(i=0,j=0;Src[i]!='\0';i++,j++)
  {
    Dest[j]=Src[i];
  }
  
  Dest[j]='\0';
  
  return;
}

int main()
{
  char Str1[30];
  char Str2[30];
  
  printf("Enter String: ");
  gets(Str1);
  
  StrCpyX(Str1,Str2);
  
  printf("\nSource String = %s\n",Str1);
  printf("\nCopied String = %s\n",Str2);
  
  getch();
  return 0;
}