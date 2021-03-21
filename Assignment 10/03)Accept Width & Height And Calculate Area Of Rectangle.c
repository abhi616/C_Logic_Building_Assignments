#include <stdio.h>


//Compiler version gcc  6.3.0

double Rect_Area(float fHeight,float fWidth)
{
   float Area=0.0;
     
   Area=fHeight*fWidth;  //PI=3.14
                             
  return Area;  
}

int main()
{
   float fValue1=0.0,fValue2=0.0;
   double dRet=0.0;
   
  printf("Enter Height: ");
  scanf("%f",&fValue1);
  
  printf("\nEnter Width: ");
  scanf("%f",&fValue2);
  
  dRet=Rect_Area(fValue1,fValue2);
  
  printf("\nArea Of Rectangle Is = %.3f\n",dRet);
  
  return 0;
}