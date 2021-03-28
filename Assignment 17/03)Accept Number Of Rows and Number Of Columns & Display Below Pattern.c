/*
     Input : iRow = 5 iCol = 5 
     Output : 
             a b c d e
             1 2 3 4 5
             a b c d e
             1 2 3 4 5
*/


#include <stdio.h>

//Compiler version gcc  6.3.0

void Pattern(int iRow,int iCol)
{
  int R,C,No=2;
  char Ch='\0';
  
  for(R=0;R<iRow;R++)
  {
    for(C=0;C<iCol;C++,No++,Ch++)
     {
      
       if(R%2==0)
        {
          if(C==0)
          {
            Ch='a';
          }
          
          printf("%c ",Ch);
          
        }
       else
       {
         if(C==0)
          {
            No=1;
          }
         
         printf("%d ",No);
         
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