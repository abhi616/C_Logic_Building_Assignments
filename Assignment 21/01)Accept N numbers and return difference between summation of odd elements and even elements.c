/*
   Input : iSize = 6 

  Elements : 85 66 3 80 93 88 

  Output : 53 (234 - 181) 
*/


#include <stdio.h>

//Compiler version gcc  6.3.0

int Difference(int Arr[],int iLength)
{
  int i=0,E_Sum=0,O_Sum=0;  
  
   for(i=0;i<iLength;i++)
   {
     
     if(Arr[i]%2==0)
      {
        E_Sum=E_Sum+Arr[i];
      }
     else
      {
        O_Sum=O_Sum+Arr[i];
      }
   }
   
   return E_Sum-O_Sum;
}

int main()
{
  int iSize=0,iRet=0,iCnt=0;
  int *P=NULL;
  
  printf("Enter Number Of Elements: ");
  scanf("%d",&iSize);
  
  P=(int*)malloc(iSize*sizeof(int));
  
  if(P==NULL)
   {
     printf("\nUnable To Allocate Memory.");
     return -1;
   }      
   
   printf("\nEnter %d Elements: \n",iSize);  
   
   for(iCnt=0;iCnt<iSize;iCnt++)
    {      
       printf("\n•Enter Element %d : ",iCnt+1);
       scanf("%d",&P[iCnt]);              
    }
   
    iRet=Difference(P,iSize);
    
    printf("\nResult Is %d\n",iRet);
    
    free(P);
    
  return 0;
}
