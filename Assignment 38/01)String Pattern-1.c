#include <stdio.h>
#include<conio.h>

//Compiler version gcc  6.3.0

void String_Pattern(char *pStr)
{
  int Len=0,i,j;
  
  for(Len=0;pStr[Len]!='\0';Len++);
  
  Len--;
  
  printf("\n");
  
  for(i=0;i<=Len;i++)
  {
    for(j=0;j<=Len;j++)
    {
      printf("%c  ",pStr[j]);
    }
    
    printf("\n");
  }
  
  return;
}

int main()
{
  char Str[30];
  
  printf("Enter String: ");
  scanf("%[^\n]s",&Str);
  
  String_Pattern(Str);
  
  getch();
  return 0;
}