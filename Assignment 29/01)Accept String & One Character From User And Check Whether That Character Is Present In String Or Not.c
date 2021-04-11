/*
      Input  : Demo 
         Ch  = e

      Output : TRUE

      Input  : Department
         Ch  = J

      Output : FALSE
*/
  

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

//Compiler version gcc  6.3.0

typedef int BOOL;

#define TRUE 1
#define FALSE 0


BOOL ChkChar(char *Str,char Ch)
{
    while(*Str!='\0')
    {
        if(*Str==Ch)
        {
            return 1;
        }

        Str++;
    }

    return 0;
}

int main()
{
  char Arr[30];
  char cValue;
  BOOL bRet=FALSE;

  printf("Enter String: ");
  scanf("%[^'\n']s",&Arr);
  fflush(stdin);

  printf("\n\nEnter The Character: ");
  scanf("%c",&cValue);
  fflush(stdin);

  bRet = ChkChar(Arr,cValue);

  if(bRet == TRUE)
  {
     printf("\nCharacter Found.");
  }
  else
  {
     printf("\nCharacter Doesn't Found...!");
  }

  getch();
  return 0;
}