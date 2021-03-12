#include <stdio.h>

//Compiler version gcc  6.3.0

void Accept(int iNo)
{
    int iCnt=0;
    
    for(iCnt=0;iCnt<iNo;iCnt++)
     {
       printf("\t*\n");
     }
}

int main()
{
   int iValue=0;
    iValue=5;
   
   Accept(iValue);
   
   return 0;
}