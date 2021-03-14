#include <stdio.h>

//Compiler version gcc  6.3.0

void PrintEven(int iNo)
{
   int i=0;
   
  if(iNo<=0)
   {
     return;
   }
  
  for(i=1;i<=iNo*2;i++)
   {
     if(i%2==0)
      {
        printf("%d ",i);
      }
   }
   
  return;
}

int main()
{
   int iValue=0;
   
   printf("Enter Number: ");
   scanf("%d",&iValue);
   
   PrintEven(iValue);
   
  return 0;
}