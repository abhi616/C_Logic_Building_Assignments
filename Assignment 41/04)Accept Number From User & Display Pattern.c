/*
  
   Input  : 
           Enter Number : 9357
 
   Output :     
           
           9 8 7 6 5 4 3 2 1 
           3 2 1 
           5 4 3 2 1 
           7 6 5 4 3 2 1 

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
    Rev=Temp%10+Rev*10;
    C++;   
  }  
  
  
  for(i=0,Temp=Rev;i<C;i++,Temp=Temp/10)
  {
    Rem=Temp%10;
    
    for(j=Rem;j>=1;j--)
    {     
      printf("%d ",j);
    }  
   
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