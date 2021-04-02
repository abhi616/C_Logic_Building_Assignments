/* 
      Input : iSize = 7 
  
      Elements : 85 66 3 80 93 88 90
  
      Output : 1 (4 -3)
 */


#include <stdio.h>
#include<conio.h>

//Compiler version gcc  6.3.0

int CountEven(int Arr[],int iLength)
{
  int i=0,E_Cnt=0,O_Cnt=0;  
      
   for(i=0;i<iLength;i++)
   {
     if(Arr[i]<=0)
     {
       continue;
     }
     
     if(Arr[i]%2==0)
      {        
       E_Cnt++;
      }
    else
     {
       O_Cnt++;
     }
   }        
    
   return E_Cnt-O_Cnt;
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
   
   printf("\nDifference Between Frequency Of Even & Odd Numbers = %d\n",iRet);   
      
    free(P);
    
    getch();
  return 0;
}