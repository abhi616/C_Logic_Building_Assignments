/*
  Input : iRow = 3 iCol = 4
  
  Output : * # * #
           * # * #
           * # * #           
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
   
  for(R=0;R<iRow;R++)
   {
    for(C=iCol;C>=1;C--)
     {   
       if(C%2==0)    
       {
         printf("* ");
       }
      else
       {
         printf("# ");
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