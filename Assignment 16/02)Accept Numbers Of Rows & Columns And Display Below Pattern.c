/*
  Input : iRow = 4 iCol = 4
  
  Output : A B C D
           a b c d
           A B C D
           a b c d      
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
   
  for(R=1;R<=iRow;R++)
   {
    for(C=1,Ch='A';C<=iCol;C++,Ch++)
     {   
       if(R%2!=0)
        {
          printf("%c ",Ch);
        }
       else
        {
          printf("%c ",Ch+32);
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