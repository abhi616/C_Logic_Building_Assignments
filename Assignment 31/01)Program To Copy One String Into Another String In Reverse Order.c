#include <stdio.h>
#include<conio.h>
#include<string.h>

//Compiler version gcc  6.3.0

void StrCpyRev(char *Src,char *Dest)
{
  int i=0;
  while(Src[i]!='\0')     //Traverse first string till end
  {
     i++;
  } 
   
  i--;
  
  while(i>=0)    //copy the contents of destination in source
  {
    *Dest=Src[i];    
     Dest++;
     i--;
  }  
  
  *Dest='\0';
  
  return;
}

int main()
{
  char Str1[30]="Marvellous";
  char Str2[30]="suollevraM";
  
  StrCpyRev(Str1,Str2);
 
  printf("\nSource String = %s\n",Str1);
  printf("\nCopied String = %s\n",Str2);
  
  getch();
  return 0;
}