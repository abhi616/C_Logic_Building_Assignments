/*
     Input : “Marvellous”
     Output : 9  
*/ 


#include <stdio.h>
#include<conio.h>

//Compiler version gcc  6.3.0

int CountSmall(char *Str)
{ 
   int iCnt=0;
   
   while(*Str!='\0')
    {
      if(*Str>=97&&*Str<=122)
       {
         iCnt++;
       }
       
      Str++;
    }
    
   return iCnt;   
}

int main()
{  
  char Arr[20]; 
  int iRet=0;
  
  printf("Enter String: ");
  scanf("%[^'\n']s",&Arr);
  
  iRet=CountSmall(Arr);
   
  printf("\nSmall Letters Count = %d\n",iRet);
     
  getch();
  
  return 0;
}