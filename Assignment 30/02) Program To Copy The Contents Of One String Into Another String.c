#include <stdio.h>
#include<conio.h>
#include<string.h>

//Compiler version gcc  6.3.0

void StrNCpyX(char *Src,char *Dest,int iCnt)
{
  
  while((*Src!='\0')&&(iCnt!=0))
  {
    *Dest=*Src;
    Dest++;
    Src++;
    iCnt--;
  }
  
  *Dest='\0';
  
  return;
}

int main()
{
  char Str1[30]="Marvellous Multi OS";
  char Str2[30]="";
  
  StrNCpyX(Str1,Str2,10);
  
  printf("\nSource String = %s\n",Str1);
  printf("\nCopied String = %s\n",Str2);
  
  getch();
  return 0;
}