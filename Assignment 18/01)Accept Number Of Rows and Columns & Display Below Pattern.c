/*
     Input : iRow = 4 iCol = 4 
     Output :
             *  #  #  # 
             *  *  #  # 
             *  *  *  # 
             *  *  *  *
*/
  

#include <stdio.h>
#include<conio.h>

//Compiler version gcc  6.3.0

void Pattern(int iRow,int iCol)
{
   int i,j;
   
   for(i=0;i<iRow;i++)
    {
     for(j=0;j<iCol;j++)
      {
        if(i>=j)
         {
           printf("*  ");
         }
        else
         {
           printf("#  ");
         }
      }
      
      printf("\n");
    }
  
   return;
}

int main()
{
  int iValue1,iValue2;
  
  printf("Enter Number Of Rows And Columns: ");
  scanf("%d%d",&iValue1,&iValue2);
  
  Pattern(iValue1,iValue2);
  
  getch();
  
  return 0;
}