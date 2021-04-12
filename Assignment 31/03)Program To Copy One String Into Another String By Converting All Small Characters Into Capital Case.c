/*
    Input  : "Marvellous Infosys"
    Output : "MARVELLOUS INFOSYS"
*/


#include <stdio.h>
#include<conio.h>
#include<string.h>

//Compiler version gcc  6.3.0

void StrCpyCap(char *Src,char *Dest)
{

  while(*Src!='\0')   
  {
    if(*Src>='a'&&*Src<='z')
    {
      *Dest=*Src-32;
      Src++;
      Dest++;
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
  char Str1[30]="Marvellous Infosys";
  char Str2[30]="";
  
  StrCpyCap(Str1,Str2);
 
  printf("\nSource String = %s\n",Str1);
  printf("\nAfter Converting All Small Characters Into Capital Character The Copied String = %s\n",Str2);
  
  getch();
  return 0;
}