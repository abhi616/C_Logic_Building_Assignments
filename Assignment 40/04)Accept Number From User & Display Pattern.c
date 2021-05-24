/*
  
    Input  : 
            Enter Number : 7853

            Enter Row & Column Count : 4

    Output :
             7 
             7 8 
             7 8 5 
             7 8 5 3 

*/

#include<stdio.h>
#include<conio.h>

//Compiler version gcc  6.3.0

void Pattern(int iNo)
{
  int i=0,j=0,C=0,Rem=0,Temp=0,Rev=0;
  
  printf("\nEnter Row & Column Count : ");
  scanf("%d",&C);
  
  printf("\n");
  
  for(Temp=iNo;Temp>0;Temp=Temp/10)
  {
    Rev=Temp%10+Rev*10;
  }
  
  for(i=0;i<C;i++)
  {
    for(j=0,Temp=Rev;j<C&&Temp>0;j++,Temp=Temp/10)
    {
       if(i>=j)
       {
         Rem=Temp%10;
         printf("%d ",Rem);
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