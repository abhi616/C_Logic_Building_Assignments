/*
  
    Input : iRow = 4 iCol = 4 
    Output : 
             1  2  3  4  
                2  3  4  
                   3  4  
                      4  
               
*/

#include <stdio.h>

//Compiler version gcc  6.3.0

void Pattern(int iRow,int iCol)
{
  int i,j;
  
  for(i=1;i<=iRow;i++)
   {
     for(j=1;j<=iCol;j++)
      {
        
        if(i<=j)
         {
           printf("%d  ",j);
         }
        else
         {
           printf("   ");
         }
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
