#include <stdio.h>
#include<conio.h>
#include<string.h>

//Compiler version gcc  6.3.0

void StrCpyCap(char *Src,char *Dest)
{
  
  while(*Src!='\0')
  {
    
    if(*Src>='A'&&*Src<='Z')
    {
      *Dest=*Src;
       Dest++;
    }
        
    Src++;
    
  }
  
  *Dest='\0';
  
  return;
}

int main()
{
  char Str1[30]="Marvellous Multi OS";
  char Str2[30]="";
  
  StrCpyCap(Str1,Str2);
  
  printf("\nSource String = %s\n",Str1);
  printf("\nCapital Letters From Source String = %s\n",Str2);
  
  getch();
  return 0;
}