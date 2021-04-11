/*
      Input  : Demo 
         Ch  = e

      Output : 1

      Input  : Department
         Ch  = J

      Output : -1
*/
  

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

//Compiler version gcc  6.3.0


int FirstIndexChar(char *Str,char Ch)
{
   int i=0;
   
    while(Str[i]!='\0')
    {
        if(Str[i]==Ch)
        {
           return i;
        }

        i++;
    }

    return -1;
}

int main()
{
  char Arr[30],cValue;
  int iRet=0;

  printf("Enter String: ");
  scanf("%[^'\n']s",&Arr);
  fflush(stdin);

  printf("\n\nEnter The Character: ");
  scanf("%c",&cValue);
  fflush(stdin);

  iRet=FirstIndexChar(Arr,cValue);

  printf("\nIndex Of Entered Character = %d\n",iRet); 

  getch();
  return 0;
}