/*
     Input : iRow = 5 iCol = 5 
     Output : 
             2 4 6 8 10
             1 3 5 7 9
             2 4 6 8 10
             1 3 5 7 9
*/


#include <stdio.h>

//Compiler version gcc  6.3.0

void Pattern(int iRow,int iCol)
{
  int R,C,No=2;
  
  for(R=0;R<iRow;R++)
  {
    for(C=0;C<iCol;C++)
     {
      
       if(R%2==0)
        {
          if(C==0)
          {
            No=2;
          }
          
          printf("%-3d ",No);
          No=No+2;
        }
       else
       {
         if(C==0)
          {
            No=1;
          }
         
         printf("%-3d ",No);
         No=No+2;
       }
       
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