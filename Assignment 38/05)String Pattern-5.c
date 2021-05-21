/*
  
  Input  :  DeMO

  Output :
           d  e  m  o  
           d  e  m  o  
           d  e  m  o  
           d  e  m  o   


*/

#include <stdio.h>
#include<conio.h>

//Compiler version gcc  6.3.0

void String_Pattern(char *pStr)
{
  int L=0,i,j;
  
  L=strlen(pStr);
  
  printf("\n");
  
  for(i=0;i<L;i++)
  {
    for(j=0;j<L;j++)
    {
      
      if(pStr[j]>='A' && pStr[j]<='Z')
      {
        printf("%c  ",pStr[j]+32);
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