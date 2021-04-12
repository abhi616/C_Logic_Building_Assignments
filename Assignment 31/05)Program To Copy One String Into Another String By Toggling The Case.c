/*
    Input  : "Marvellous Infosys"
    Output : "mARVELLOUS iNFOSYS"
*/


#include <stdio.h>
#include<conio.h>
#include<string.h>

//Compiler version gcc  6.3.0

void StrCpyToggle(char *Src,char *Dest)
{

  while(*Src!='\0')   
  {
    if(*Src>='A'&&*Src<='Z')
    {
      *Dest=*Src+32;
      Src++;
      Dest++;
     
    }
    
   else if(*Src>='a'&&*Src<='z')  
   {
     *Dest=*Src-32;
      Src++;
      Dest++;
         
   }  
   
   else
    {
      *Dest=*Src;
       Src++;
       Dest++;
    } 
   
  }     
  
  *Dest='\0';
  
  return;
}

int main()
{
  char Str1[30]="Marvellous Infosys";
  char Str2[30]="";
  
  StrCpyToggle(Str1,Str2);
 
  printf("\nSource String = %s\n",Str1);
  printf("\nToggled String = %s\n",Str2);
  
  getch();
  return 0;
}