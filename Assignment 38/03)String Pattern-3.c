/*
  Input : Demo

  Ouput : 
         D      
         D  e      
         D  e  m      
         D  e  m  o        

*/

#include <stdio.h>
#include<conio.h>

//Compiler version gcc  6.3.0

void String_Pattern(char *pStr)
{
  int L=0,i=0,j=0;
  
  for(L=0;pStr[L]!='\0';L++);
  
  printf("\n");
  
  for(i=0;i<L;i++)
  {
    for(j=0;j<L;j++)
    {
      /*
          //If We Want To Skip/Avoid White Spaces Then Use This if.

       if(pStr[j]==' ')
       {
         continue;
       }
        
      */
        
      if(i>=j)
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
  char Str[30]="\0";
  
  printf("Enter String : ");
  scanf("%[^\n]s",&Str);
  
  String_Pattern(Str);
  
  getch();
  return 0;
}