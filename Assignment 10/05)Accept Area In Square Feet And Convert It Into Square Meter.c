/*
    Input:5
    Output:0.4645
    
    Input:7
    Output:0.6503
*/

//    1 Sq.ft=0.0929 Sq.m

#include <stdio.h>

//Compiler version gcc  6.3.0

double SquareMeter(int iValue)
{
   float Area=0.0;
     
   Area=iValue*0.0929;  
                    
  return Area;  
}

int main()
{
   int iValue=0;
   double dRet=0.0;
   
  printf("Enter Area In Square Feet: ");
  scanf("%d",&iValue);
  
  dRet=SquareMeter(iValue);
  
  printf("\nArea In Square Meter Is = %.4f\n",dRet);
  
  return 0;
}