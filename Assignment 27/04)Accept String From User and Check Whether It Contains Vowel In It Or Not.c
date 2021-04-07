/*
     Input  : ““marvellous”
     Output : TRUE

     Input  : "xyz"
     Output : FALSE
*/ 


#include <stdio.h>
#include<conio.h>

//Compiler version gcc  6.3.0

typedef int BOOL;

#define TRUE 1
#define FALSE 0


BOOL ChkVowel(char *Str)
{ 
  
   while(*Str!='\0')
    {
      
      if(*Str=='A'||*Str=='a'||*Str=='E'||*Str=='e'||*Str=='I'||*Str=='i'||*Str=='O'||*Str=='o'||*Str=='U'||*Str=='u')
       {
         return TRUE;
       }
                  
       Str++;
       
    }
    
   return FALSE;   
}

int main()
{  
  char Arr[20]; 
  BOOL bRet=FALSE;
  
  printf("Enter String: ");
  scanf("%[^'\n']s",&Arr);
  
  bRet=ChkVowel(Arr);
   
  if(bRet==TRUE)
   {
     printf("\nContains Vowels\n");
   }
  else
   {
     printf("\nThere Is No Vowel\n");
   }
     
  getch();
  
  return 0;
}