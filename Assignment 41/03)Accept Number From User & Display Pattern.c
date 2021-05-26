/*
  
   Input  : 
           Enter Number : 7846
 
   Output :
     
           1 2 3 4 5 6 7 
           1 2 3 4 5 6 7 8 
           1 2 3 4 
           1 2 3 4 5 6 

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
    
    for(j=1;j<=Rem;j++)
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