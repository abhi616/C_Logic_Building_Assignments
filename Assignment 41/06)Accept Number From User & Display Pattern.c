/*
  
   Input  : 
           Enter Number : 7846

   Output :
     
           6 # # # # # # 
           4 # # # # 
           8 # # # # # # # # 
           7 # # # # # # # 

*/

#include <stdio.h>
#include<conio.h>

//Compiler version gcc  6.3.0

void Pattern(iNo)
{
  int i=0,j=0,C=0,Rem=0,Rev=0,Temp=0;
  
  // Finding Total Digits Count From Given Number 
  for(Temp=iNo;Temp>0;Temp=Temp/10)
  {
    C++;
  }
  
  printf("\n");
  
  for(i=0,Temp=iNo;i<C;i++,Temp=Temp/10)
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
  
  return 0;
}