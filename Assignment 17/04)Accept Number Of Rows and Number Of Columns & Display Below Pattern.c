/*
     Input : iRow = 5 iCol = 5 
     Output : 
             1  2  3  4  5
            -1 -2 -3 -4 -5
             1  2  3  4  5
            -1 -2 -3 -4 -5
*/


#include <stdio.h>

//Compiler version gcc  6.3.0

void Pattern(int iRow,int iCol)
{
  int R,C;
  
  for(R=0;R<iRow;R++)
  {
    for(C=1;C<=iCol;C++)
     {
      
       if(R%2==0)
        {                  
           printf("%2d ",C);          
        }
       else
       {        
         printf("%-2d ",-C);       
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