/*
  
    Input : iRow = 5 iCol = 5
    Output : 
             1  2  3  4  5  
             1  2        5  
             1     3     5  
             1        4  5  
             1  2  3  4  5  

               
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
        
        if(j==i||i==1||i==iRow||j==1||j==iCol)
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
  
}

int main()
{
  int iValue1,iValue2;
  
  printf("Enter Number Of Rows & Columns: ");
  scanf("%d%d",&iValue1,&iValue2);
  
  Pattern(iValue1,iValue2);
  
  return 0;
}