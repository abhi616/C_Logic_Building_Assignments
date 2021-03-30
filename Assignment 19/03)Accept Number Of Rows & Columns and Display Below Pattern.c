/*
    Input : iRow = 5 iCol = 5 
    Output : 
             $  *  *  *  *  
             #  $  *  *  *  
             #  #  $  *  *  
             #  #  #  $  *  
             #  #  #  #  $  
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
        
        if(i==j)
         {
           printf("$  ");
         }
       else if(i>j)
         {
           printf("#  ");
         }
       else
         {
           printf("*  ");
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