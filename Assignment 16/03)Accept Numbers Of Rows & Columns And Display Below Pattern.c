/*
  Input : iRow = 4 iCol = 5
  
  Output : A A A A A
           B B B B B 
           C C C C C 
                 
*/
  

#include <stdio.h>

//Compiler version gcc  6.3.0

void Pattern(int iRow,int iCol)
{
  char Ch='\0';
  int R,C;
  
  if(iRow<0||iCol<0)
   {
     printf("\nInvalid Numbers/Count...!");
     return;
   }
   
  for(R=1,Ch='A';R<=iRow;R++,Ch++)
   {
    for(C=1;C<=iCol;C++)
     {                 
         printf("%c ",Ch);              
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
