/*
  
  Input  : dEmo
  
  Output :
     
           D  E  M  O  
           D  E  M  O  
           D  E  M  O  
           D  E  M  O      

*/

#include<stdio.h>
#include<conio.h>

//Compiler version gcc  6.3.0

void String_Pattern(char *pStr)
{
  int L=0,i=0,j=0;
  
  L=strlen(pStr);
  
  for(i=0;i<L;i++)
  {
    for(j=0;j<L;j++)
    {
      if(pStr[j]>='a' && pStr[j]<='z')
      {
        printf("%c  ",pStr[j]-32);
      }
     else
     {
       printf("%c  ",pStr[j]);
     }
     
    }
    
    printf("\n");
  }
  
  return;
}


int main()
{
  char Str[40];
  
  printf("Enter String : ");
  scanf("%[^\n]s",&Str);
  
  String_Pattern(Str);
  
  getch();
  return 0;
}