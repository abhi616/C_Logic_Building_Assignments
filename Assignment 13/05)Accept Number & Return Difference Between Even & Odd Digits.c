    //Display Difference Between Even And Odd Digits Sum

/*
   Input : 2395 
   Output : -15 (2 - 17) 

   Input : 1018 
   Output : 6 (8 - 2) 

   Input : 5733 
   Output : -18 (0 - 18)
*/


#include <stdio.h>

//Compiler version gcc  6.3.0

int CountDiff(int iNo)
{
   int Rem=0,ESum=0,OSum=0;
   
   if(iNo<0)
    {
      iNo=-iNo;
    }
  
   for(;iNo>0;iNo=iNo/10)
    {
      Rem=iNo%10;
      
      if(Rem%2==0)   
      {
        ESum=ESum+Rem;
      }
     else
      {
        OSum=OSum+Rem;
      }  
       
    }
       
   return ESum-OSum;
}

int main()
{
  int iValue=0,iRet=0;
  
  printf("Enter Number: ");
  scanf("%d",&iValue);
  
  iRet=CountDiff(iValue);
  
  
  printf("\nDifference Between Summation Of Evem & Odd Digits= %d\n",iRet);
   
  
  return 0;
}
