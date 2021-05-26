/*
  
    Input  : 
            Enter Number : 6358

    Output :
      
            6 # # # # # # 
            3 # # # 
            5 # # # # # 
            8 # # # # # # # # 

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
      if(j==Rem)
      {
        printf("%d # ",j);
      }
      else
      {
        printf("# ");
      }
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