/*
     Input : iRow = 4 iCol = 4 
     Output : 
             1 2 3 4 
             5 6 7 8 
             9 1 2 3 
             4 5 6 7
*/


#include <stdio.h>

//Compiler version gcc  6.3.0

void Pattern(int iRow,int iCol)
{
  int R,C,No=1;
  
  for(R=0;R<iRow;R++)
  {
    for(C=0;C<iCol;C++,No++)
     {
       
       if(No>9)
       {
         No=1;
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