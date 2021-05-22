/*
  Input :
         Enter 1st String : InFoRmAtion

         Enter 2nd String : PrcTical

 Output :

        1st String Capital Letters Count = 4

        2nd String Capital Letters Count = 2
  

*/

#include<stdio.h>
#include<conio.h>

//Compiler version gcc  6.3.0

void Find_CapLCount(char *str1,char *str2)
{
  int i=0,Cap_Cnt=0;
  
  // Finding 1st String Capital Letters Count
  for(i=0;i<str2[i]!='\0';i++)
  {
    if(str1[i]>='A'&&str1[i]<='Z')
    {
      Cap_Cnt++;
    }
  }
  
  printf("\n****************************************\n");
  
  printf("\n1st String Capital Letters Count = %d",Cap_Cnt);
  
  Cap_Cnt=0;
  
  // Finding 2nd String Capital Letters Count
 for(i=0;str2[i]!='\0';i++) 
 {
   if(str2[i]>='A'&&str2[i]<='Z')
   {
     Cap_Cnt++;
   }
   
 }
 
 printf("\n\n2nd String Capital Letters Count = %d",Cap_Cnt);
 
 printf("\n\n****************************************\n");
 
 return;
}


int main()
{
  char Str1[40],Str2[40];
  
  printf("Enter 1st String : ");
  gets(Str1);
  
  printf("\nEnter 2nd String : ");
  scanf("%[^\n]s",&Str2);
  
  Find_CapLCount(Str1,Str2);
  
  getch();
  return 0;
}