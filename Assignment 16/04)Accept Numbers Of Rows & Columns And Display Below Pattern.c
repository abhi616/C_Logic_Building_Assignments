/*
  Input : iRow = 4 iCol = 5
  
  Output : 4 4 4 4 4
           3 3 3 3 3
           2 2 2 2 2 
           1 1 1 1 1      
*/
  

#include <stdio.h>

//Compiler version gcc  6.3.0

void Pattern(int iRow,int iCol)
{
    
  int R,C;
  
  if(iRow<0||iCol<0)
   {
     printf("\nInvalid Numbers/Count...!");
     return;
   }
   
  for(R=iRow;R>=1;R--)
   {        
    for(C=1;C<=iCol;C++)
     {                 
         printf("%d ",R);              
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