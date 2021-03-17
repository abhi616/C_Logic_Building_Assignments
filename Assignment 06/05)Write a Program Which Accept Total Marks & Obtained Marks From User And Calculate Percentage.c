#include <stdio.h>

//Compiler version gcc  6.3.0


float Percentage(float TotM,float ObtM)
{
  
  if(TotM==0||ObtM==0)
  {
    printf("\nInvalid Numbers...\n");
    return 0;
  }
      
   
   return(ObtM/TotM)*100.0; 
  
}

int main()
{
   int iValue1=0,iValue2=0;
   float fRet=0.0;
   
   printf("Please Enter Number Total Marks: ");
   scanf("%d",&iValue1);
   
   printf("\nPlease Enter Obtained Marks: ");
   scanf("%d",&iValue2);
   
   fRet=Percentage(iValue1,iValue2);
   
   printf("\nPercentage = %.2f\n",fRet);
 
   return 0;
}