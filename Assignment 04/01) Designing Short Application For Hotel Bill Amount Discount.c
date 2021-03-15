#include <stdio.h>


//Compiler version gcc  6.3.0

float Calculate_Bill(float fAmount)
{
        
    if(fAmount<=500)
     {
       
       printf("\nNo Discount Apply...");
       return fAmount;
       
     }
     else if(fAmount>500&&fAmount<=1500)
     {
       
       return(fAmount-(fAmount*10)/100);
       
     }
     else if(fAmount>1500)
     {
       
       return(fAmount-(fAmount*15)/100);
       
     }
  
}

int main()
{
   float Amount=0.0,bRet=0.0;
   
   printf("Enter Your Bill Amount: ");
   scanf("%f",&Amount);
   
   bRet=Calculate_Bill(Amount);
   
   if(bRet>500)
    {
      printf("\nAfter Applying Discount Your Total Bill : %.2f\n",bRet);
    }
   else
    {
      printf("\nYour Total Bill : %.2f\n",bRet);
    }
  
  return 0;
}