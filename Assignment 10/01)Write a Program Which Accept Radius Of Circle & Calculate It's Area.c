/*
   Input:5.3
   Output:88.2026
/*


#include <stdio.h>

#define PI 3.14

//Compiler version gcc  6.3.0

double Circle_Area(float fRadius)
{
   double Area=0.0;
     
   Area=PI*fRadius*fRadius;  //PI=3.14
                             
  return Area;  
}

int main()
{
   float fValue=0.0;
   double dRet=0.0;
   
  printf("Enter Radius: ");
  scanf("%f",&fValue);
  
  dRet=Circle_Area(fValue);
  
  printf("\nArea Of Circle Is = %lf\n",dRet);
  
  return 0;
}
