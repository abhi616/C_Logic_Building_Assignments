#include <stdio.h>

//Compiler version gcc  6.3.0

void Table(int iNo)
{
  int i=1;
      
      //To Handle Negative Input
      if(iNo<0)
      {
        iNo=-iNo;
      }
      
      for(i=0;i<=10;i++)
      {
        printf("%d ",iNo*i);
      }
      
        
  return;
}

int main()
{
   int iValue=0;
   
  printf("Enter Number: ");
  scanf("%d",&iValue);
  
  Table(iValue);
  
  return 0;
}
