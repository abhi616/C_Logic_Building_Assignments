/*
     Input : iRow = 4 iCol = 4 
     Output : 
             1 2 3 4  
             2 3 4 5
             3 4 5 6
             4 5 6 7
*/


#include <stdio.h>

//Compiler version gcc  6.3.0

void Pattern(int iRow,int iCol)
{
  int R,C,No=0;
  
  for(R=1;R<=iRow;R++)
  {
    for(C=1;C<=iCol;C++,No++)
     {
      if(C==1)
       {
         No=R;
       }
       
       printf("%d ",No);
     }
    
     printf("\n");
  }
  
  return;
}


int main()
{
  int iValue1,iValue2;
  
  printf("Enter Number Of Row & Columns: ");
  scanf("%d%d",&iValue1,&iValue2);
  
  Pattern(iValue1,iValue2);
  
  return 0;
}