#include <stdio.h>

//Compiler version gcc  6.3.0


float Percentage(int TotM,int ObtM)
{
  
  if(TotM==0||ObtM==0)
  {    
    return -1;
  }
        
   return (float)(ObtM)/(TotM)*100;       // Typecasting : Means When Any Data Type Is Small And whenever we want to convert it into big type of data then this concept is used
  
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
   
   if(fRet==-1)
   {
     printf("\nInvalid Numbers...\n");
   }
   else
   {
     printf("\nPercentage = %.2f\n",fRet);
   }
   
 
   return 0;
 }