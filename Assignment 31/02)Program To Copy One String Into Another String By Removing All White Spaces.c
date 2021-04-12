/*
    Input  : "Marv e llous"
    Output : "Marvellous"
*/


#include <stdio.h>
#include<conio.h>
#include<string.h>

//Compiler version gcc  6.3.0

void StrCpyX(char *Src,char *Dest)
{

  while(*Src!='\0')   
  {
    if(*Src==' ')
    {
      *Src++;
      continue;
    }
        
    *Dest=*Src;
    Src++;
    Dest++;
     
  }     
  
  *Dest='\0';
  
  return;
}

int main()
{
  char Str1[30]="Marv  ellous ";
  char Str2[30]="";
  
  StrCpyX(Str1,Str2);
 
  printf("\nSource String = %s\n",Str1);
  printf("\nCopied String = %s\n",Str2);
  
  getch();
  return 0;
}
