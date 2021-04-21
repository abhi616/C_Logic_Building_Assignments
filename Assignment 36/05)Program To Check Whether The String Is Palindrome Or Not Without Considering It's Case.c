#include <stdio.h>
#include<conio.h>

//Compiler version gcc  6.3.0

typedef int BOOL;

#define TRUE 1
#define FALSE 0

BOOL StrPalindrome(char *Str)
{
   char *first,*last;
   
   first=Str;
   
   while(*Str!='\0')
   {
      Str++;
   }
   
   last=Str-1;
   
   while(first<=last)
   {
      if(*first==*last+32||*first==*last-32)
       {
         goto up;
       }

      if(*first!=*last)
       {
         return 0;
       }
       
       
     up:
      first++;
      last--;
   }
   
   return 1;
}


int main()
{
  BOOL bRet=0;
  char Arr[20]="abccBA";
  
  bRet=StrPalindrome(Arr);
  
  if(bRet==TRUE)
  {
    printf("\nString Is Palindrome\n");
  }
  else
  {
    printf("\nString Is Not Palindrome\n");
  }
  
  getch();
  return 0;
}