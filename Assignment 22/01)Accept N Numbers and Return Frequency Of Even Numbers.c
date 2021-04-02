/* 
      Input : iSize = 6 
  
      Elements : 85 66 3 80 93 88
  
      Output : 3
 */


#include <stdio.h>

//Compiler version gcc  6.3.0

int CountEven(int Arr[],int iLength)
{
  int i=0,Cnt=0;  
      
   for(i=0;i<iLength;i++)
   {
     if(Arr[i]<=0)
     {
       continue;
     }
     
     if(Arr[i]%2==0)
      {        
        Cnt++;
      }
     
   }   
   
   if(Cnt==0)    //For Handling Such Cases Where Number Isn't Divisible By 5
    {
      printf("\nDoesn't Contain Any Element Which Are Even...!\n");
    }
    
   return Cnt;
}

int main()
{
  int iSize=0,iCnt=0,iRet=0;
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
   
   iRet=CountEven(P,iSize);
   
   printf("\nTotal Even Numbers = %d\n",iRet);   
      
    free(P);
    
  return 0;
}