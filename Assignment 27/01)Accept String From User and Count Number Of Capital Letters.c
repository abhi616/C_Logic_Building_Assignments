/*
     Input : “Marvellous Multi OS”
     Output : 4    
*/ 


#include <stdio.h>
#include<conio.h>

//Compiler version gcc  6.3.0

int CountCapital(char *Str)
{ 
   int iCnt=0;
   
   while(*Str!='\0')
    {
      if(*Str>=65&&*Str<=90)
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
  
  iRet=CountCapital(Arr);
   
  printf("\nCapital Letters Count = %d\n",iRet);
     
  getch();
  
  return 0;
}
