/*
     Input : iRow = 4 iCol = 4 
     Output :
             1  2  3  4  
             1  *  *  4  
             1  *  *  4  
             1  2  3  4  
             
*/
  

#include <stdio.h>
#include<conio.h>

//Compiler version gcc  6.3.0

void Pattern(int iRow,int iCol)
{
   int i,j;
   
   for(i=1;i<=iRow;i++)
    {
     for(j=1;j<=iCol;j++)
      {
        if(i==1||i==iRow||j==1||j==iCol)
         {
           printf("%d  ",j);
         }
        else
         {
           printf("*  ");
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