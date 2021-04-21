/*
   Input  : “aCBdef”
            “FEDcbA”
            
            
   Output : TRUE
*/

#include <stdio.h>
#include<conio.h>
#include<string.h>

//Compiler version gcc  6.3.0


void StrRevTogX(char *Str)
{
   char *Temp;
   char *first,*last;
   
   first=Str;
   last=Str;
   
   while(*last!='\0')
   {
     last++;
   }
    
   last--; 
     
   
   while(first<=last)
   {
     Temp=*first;
     
     *first=(*last>='A'&&*last<='Z'?*last+32:*last>='a'&&*last<='z'?*last-32:*last);
    
     *last=(Temp>='A'&&Temp<='Z'?Temp+32:Temp>='a'&&Temp<='z'?Temp-32:Temp);
      
    
     first++;
     last--;
   }
    
   return;
   
}

int main()
{
  char Arr[50]="";
  
  printf("\nEnter String: ");
  scanf("%[^''\n']s",&Arr);
  
  StrRevTogX(Arr);
  
  printf("\nModified String = %s\n",Arr);
  
  getch();
  return 0;
}