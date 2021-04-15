/*
   Input  : "Marvellous Infosys "
            "Logic Building"
            iCnt=5
            
   Output : Marvellous Infosys Logic
*/

#include <stdio.h>
#include<conio.h>
#include<string.h>

//Compiler version gcc  6.3.0

void StrCatX(char *Src,char *Dest,int iCnt)
{
   while(*Src!='\0')
   {
     Src++;
   }
    
  while((*Dest!='\0')&&(iCnt!=0))
  {   
    *Src=*Dest;     
     Dest++;   
     Src++; 
     iCnt--;
  }
  
  Src='\0';
  
  return;
}

int main()
{
  char Str1[50]="Marvellous Infosys ";
  char Str2[30]="Logic Building";
  
  StrCatX(Str1,Str2,5);
  
  printf("\nModified String : %s\n",Str1);
  
  getch();
  return 0;
}