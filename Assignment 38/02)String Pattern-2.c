/*
  
  Input  : Program

  Output : 
    
          P  r  o  g  r  a  m  
          P  r  o  g  r  a  
          P  r  o  g  r  
          P  r  o  g  
          P  r  o  
          P  r  
          P  

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
        // If We Want To Skip White Spaces Then We Use This if 
      
      if(pStr[j]==' ')
      {
        continue;
      }
      
      */
      
      if(i+j<L)
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
  char Str[30];
  
  printf("Enter String : ");
  scanf("%[^\n]s",&Str);
  
  String_Pattern(Str);
  
  getch();
  return 0;
}