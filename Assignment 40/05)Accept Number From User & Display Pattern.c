/*
  
    Input  : 
            Enter Number : 8754       
    
    Output :
            4 
            4 5 
            4 5 7 
            4 5 7 8 

*/

#include<stdio.h>
#include<conio.h>

//Compiler version gcc  6.3.0

void Pattern(int iNo)
{
  int i=0,j=0,C=0,Rem=0,Temp=0;
  
  printf("\n");
  
  // Find Total Digits Count In Given Number
  for(Temp=iNo;Temp>0;Temp=Temp/10)
  {
    C++;
  }
  
  for(i=0;i<C;i++)
  {
    for(j=0,Temp=iNo;j<C&&Temp>0;j++,Temp=Temp/10)
    {
      if(i>=j)
      {
        Rem=Temp%10;
        printf("%d ",Rem);
      }
    }
    printf("\n");
  }
}


int main()
{
  int No=0;
  
  printf("Enter Number : ");
  scanf("%d",&No);
  
  Pattern(No);
  
  getch();
  return 0;
}