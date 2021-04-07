/*
     Input  : ““MarvellouS”
     Output : “SuollevraM”    
*/ 


#include <stdio.h>
#include<conio.h>

//Compiler version gcc  6.3.0


void Reverse(char *Src,char *Dest)
{ 
   int i=0,j=0;
   
   for(i=0;Src[i]!='\0';i++);
   
   i=i-1;
    
   for(j=0;i>=0;j++,i--)
    {
      Dest[j]=Src[i];
    }
    
   Dest[j]='\0';
    
   return;   
}

int main()
{  
  char Arr1[20]=" ";
  char Arr2[20]=" "; 
  
  printf("Enter String: ");
  scanf("%[^'\n']s",&Arr1);
  
  Reverse(Arr1,Arr2);
  
  printf("\nReverse String = %s\n",Arr2);
    
  getch();
    
  return 0;
}