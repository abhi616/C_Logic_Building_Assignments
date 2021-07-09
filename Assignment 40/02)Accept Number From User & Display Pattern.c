/*
  
  Input  :
           Enter Number : 8759

 Output :
          8 7 5 9 
          8 7 5 9 
          8 7 5 9 
          8 7 5 9 

*/

#include<stdio.h>
#include<conio.h>

//Compiler version gcc  6.3.0

void Pattern(int iNo)
{
   int i=0,j=0,Temp=0,C=0,Rev=0,Rem=0;
   
   
   printf("\n");
   
   // Reverse The Number & Also Find Count Of Digits In Given Number
   for(Temp=iNo;Temp>0;Temp=Temp/10)
   {
     Rev=Temp%10+Rev*10;
     C++;
   }
  
   // Again Reverse That Number For Printing Pattern
   for(i=0;i<C;i++)
   {
     for(j=0,Temp=Rev;j<C&&Temp>0;j++,Temp=Temp/10)
     {
       Rem=Temp%10;
       printf("%d ",Rem);       
     }
     printf("\n");
   }
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
