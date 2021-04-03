/* 
      Input : iSize = 6 
      
       iStart = 60
       
       iEnd   = 90
      
      Elements : 85 66 11 80 96 88 
   
      Output : 85 66 80 88


      Input : iSize = 6
      
      iStart = 30
      
      iEnd   = 50
      
      Elements : 85 66 3 80 93 88 
      
      Output : 0
 */


#include <stdio.h>
#include<conio.h>

//Compiler version gcc  6.3.0

void Range(int Arr[],int iLength,int iStart,int iEnd)
{
  int i=0;  
    
   printf("\nElements In Between %d-%d: \n",iStart,iEnd);
     
   for(i=0;i<iLength;i++)
   {
     if(Arr[i]<=0)
     {
       continue;
     }
     
     if(Arr[i]>iStart&&Arr[i]<iEnd)
      {        
        printf("%d ",Arr[i]);
      }
    
   }            
   
   return;
}

int main()
{
  int iSize=0,iCnt=0,iValue1=0,iValue2=0;
  int *P=NULL;   
  
  
  printf("Enter Number Of Elements: ");
  scanf("%d",&iSize); 
  
  printf("\nEnter The Starting Point: ");
  scanf("%d",&iValue1);
  
  printf("\nEnter The Ending Point: ");
  scanf("%d",&iValue2);
  
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
  
   Range(P,iSize,iValue1,iValue2);       
      
   free(P);
    
   getch();
   
   return 0;
}
