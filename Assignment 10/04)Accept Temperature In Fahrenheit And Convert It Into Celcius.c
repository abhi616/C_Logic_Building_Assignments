/*
  Input:10
  Output:-12.221

  Input:34
  Output:1.111
*/


#include <stdio.h>


//Compiler version gcc  6.3.0

double FhToCs(float fTemp)
{
   float Cel=0.0;
     
   Cel=(fTemp-32)*(0.555);  
                    
  return Cel;  
}

int main()
{
   float fValue=0.0;
   double dRet=0.0;
   
  printf("Enter Temperature In Fahrenheit: ");
  scanf("%f",&fValue);
  
  dRet=FhToCs(fValue);
  
  printf("\nTemperature In Celcius Is = %.3f\n",dRet);
  
  return 0;
}
