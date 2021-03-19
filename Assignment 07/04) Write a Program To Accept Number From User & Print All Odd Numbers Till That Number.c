#include <stdio.h>

//Compiler version gcc  6.3.0

void OddDisplay(int iNo)
{
  int i=0;
        
      for(i=1;i<=iNo;i++)
       {
         if(i%2!=0)
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
  
  OddDisplay(iValue);
  
  return 0;
}