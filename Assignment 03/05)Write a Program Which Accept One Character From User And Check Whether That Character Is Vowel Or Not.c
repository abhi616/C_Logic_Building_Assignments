#include <stdio.h>

typedef int BOOL;

#define TRUE 1
#define FALSE 0

//Compiler version gcc  6.3.0

BOOL ChkVowel(char CValue)
{
      
  if(CValue=='A'||CValue=='a'||CValue=='E'||CValue=='e'||CValue=='I'||CValue=='i'||CValue=='O'||CValue=='o'||CValue=='U'||CValue=='u')
   {
     return TRUE;
   }
  else 
   {
     return FALSE;
   }
  
}

int main()
{
   char cValue='\0';
   BOOL bRet=FALSE;
   
   printf("Enter Character: ");
   scanf("%c",&cValue);
   
   bRet=ChkVowel(cValue);
   
   if(bRet==TRUE)
   {
     printf("\nIt Is Vowel\n");
   }
   else
    {
      printf("\nIt Is Not Vowel\n");
    }
   
  return 0;
}