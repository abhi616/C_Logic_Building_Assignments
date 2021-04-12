/*
    Input  : "Marvellous Infosys"
    Output : "marvellous infosys"
*/


#include <stdio.h>
#include<conio.h>
#include<string.h>

//Compiler version gcc  6.3.0

void StrCpySmall(char *Src,char *Dest)
{

  while(*Src!='\0')   
  {
    if(*Src>='A'&&*Src<='Z')
    {
      *Dest=*Src+32;
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
  
  StrCpySmall(Str1,Str2);
 
  printf("\nSource String = %s\n",Str1);
  printf("\nAfter Converting All Capital Characters Into Small Character The Copied String = %s\n",Str2);
  
  getch();
  return 0;
}