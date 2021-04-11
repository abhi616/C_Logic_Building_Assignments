/*
      Input  : Deemo 
         Ch  = e

      Output : 2

      Input  : Department
         Ch  = J

      Output : 0
*/
  

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

//Compiler version gcc  6.3.0


int CountChar(char *Str,char Ch)
{
   int i=0,Cnt=0;
   
    while(Str[i]!='\0')
    {
        if(Str[i]==Ch)
        {
           Cnt++;
        }

        i++;
    }

    return Cnt;
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

  iRet=CountChar(Arr,cValue);

  printf("\nCount Of Entered Character = %d\n",iRet); 

  getch();
  return 0;
}