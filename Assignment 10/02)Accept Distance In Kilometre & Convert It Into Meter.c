#include <stdio.h>


//Compiler version gcc  6.3.0

int KMToMeter(int iNo)
{
   int Meter=0;
      
   Meter=iNo*1000;  // (1 Km= 1000 M)   
                             
  return Meter;  
}

int main()
{
   int iValue=0,iRet=0;
   
  printf("Enter Distance: ");
  scanf("%d",&iValue);
  
  iRet=KMToMeter(iValue);
  
  printf("\nDistance In Meter = %d\n",iRet);
  
  return 0;
}