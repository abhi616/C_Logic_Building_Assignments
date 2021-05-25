/*
  
   Input  : 
           Enter Number : 8536

   Output :
           * * * * * * 
           * * * 
           * * * * * 
           * * * * * * * * 

*/

#include <stdio.h>
#include<conio.h>

//Compiler version gcc  6.3.0

void Pattern(int iNo)
{
  int i=0,j=0,C=0,Rem=0,Rev=0,Temp=0;
  
  printf("\n");
  
  for(Temp=iNo;Temp>0;Temp=Temp/10)
  {
    C++;
  }
  
  Temp=iNo; 
  
  for(i=0;i<C;i++)
  {
    Rem=Temp%10;
    
    for(j=0;j<Rem;j++)
    {
      printf("* ");
    }
    
    Temp=Temp/10;
    printf("\n");
  }
  
  return;
}


int main()
{
  int No; 
  
  printf("Enter Number : ");
  scanf("%d",&No);
  
  Pattern(No);
  
  getch();
  return 0;
}