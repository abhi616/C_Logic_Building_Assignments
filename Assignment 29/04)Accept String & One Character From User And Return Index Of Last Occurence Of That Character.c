/*
      Input  : Deemo 
         Ch  = j

      Output : -1

      Input  : Department
         Ch  = t

      Output : 9
*/
  

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

//Compiler version gcc  6.3.0


int LastOccurChar(char *Str,char Ch)
{
   int i=0,L_Occur=-1;
   
    while(Str[i]!='\0')
    {
        if(Str[i]==Ch)
        {
          L_Occur=i;
        }

        i++;
    }
     
    return L_Occur;
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

  iRet=LastOccurChar(Arr,cValue);

  printf("\nIndex Of Last Occurence Of Entered Character = %d\n",iRet); 

  getch();
  return 0;
}