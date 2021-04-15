/*
   Input  : "Marvellous Infosys"
            "Marvellous Logic Building"
            
            
   Output : TRUE
*/

#include <stdio.h>
#include<conio.h>
#include<string.h>

//Compiler version gcc  6.3.0

typedef int BOOL;

#define TRUE 1
#define FALSE 0


BOOL StrNCmpX(char *Src,char *Dest,int iCnt)
{
   while((*Src!='\0')&&(*Dest!='\0')&&(iCnt!=0))
   {
      if(*Src==*Dest)
       {
         Src++;
         Dest++;   
       }
      else
       {
         return 0;
       }
     
      iCnt--;
   }
    
   return 1;
   
}

int main()
{
  BOOL bRet=1;
  char Str1[50]="Marvellous Infosys";
  char Str2[30]="Marvellous Logic Building";
  
  printf("\n1st String = %s\n",Str1);
  printf("\n2nd String = %s\n",Str2);
  
  bRet=StrNCmpX(Str1,Str2,10);
  
  if(bRet==1)
  {
    printf("\nBoth Strings Are Equal\n");
  }
 else
  {
    printf("\nBoth Strings Are Not Equal\n");
  }
  
  getch();
  return 0;
}