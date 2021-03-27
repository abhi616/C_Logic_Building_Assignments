/*
  Input : iRow = 3 iCol = 4
  
  Output : 1  2  3  4
           5  6  7  8 
           9  10 11 12
              
*/
  

#include <stdio.h>

//Compiler version gcc  6.3.0

void Pattern(int iRow,int iCol)
{
  int No=1;  
  int R,C;
  
  if(iRow<0||iCol<0)
   {
     printf("\nInvalid Numbers/Count...!");
     return;
   }
   
  for(R=1;R<=iRow;R++)
   {        
    for(C=1;C<=iCol;C++,No++)
     {                 
         printf("%-3d ",No);              
     }
     
     printf("\n");
   }
  
  return;
}

int main()
{
  int iValue1,iValue2;
  
  printf("Enter Number Of Rows & Columns: ");
  scanf("%d%d",&iValue1,&iValue2);
  
  Pattern(iValue1,iValue2);
  
  return 0;
}