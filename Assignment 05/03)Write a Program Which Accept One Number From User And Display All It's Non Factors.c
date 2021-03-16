#include <stdio.h>

//Compiler version gcc  6.3.0

void Non_Fact(int iNo)
{
   int i=0;
   
  if(iNo<=0)
   {
     iNo=-iNo;
   }
   
  printf("\nNon Factors Of %d: ",iNo);
  
  for(i=1;i<=iNo;i++)
   {
     
     if(iNo%i!=0)
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
   
   Non_Fact(iValue);
     
   
  return 0;
}