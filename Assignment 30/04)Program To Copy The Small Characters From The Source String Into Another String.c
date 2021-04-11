#include <stdio.h>
#include<conio.h>
#include<string.h>

//Compiler version gcc  6.3.0

void StrCpySmall(char *Src,char *Dest)
{
  
  while(*Src!='\0')
  {
      
    if(*Src>='a'&&*Src<='z')
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
  char Str1[30]="Marvellous multi OS";
  char Str2[30]="";
  
  StrCpySmall(Str1,Str2);
  
  printf("\nSource String = %s\n",Str1);
  printf("\nSmall Letters From Source String = %s\n",Str2);
  
  getch();
  return 0;
}