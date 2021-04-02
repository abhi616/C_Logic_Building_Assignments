/* 
      Input : iSize = 6 
      
      Elements : 85 66 11 80 93 88 
   
      Output : 11 is present 


      Input : iSize = 6 
 
      Elements : 85 66 3 80 93 88 
      
      Output : 11 is absent
 */


#include <stdio.h>
#include<conio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

//Compiler version gcc  6.3.0

BOOL Check(int Arr[],int iLength)
{
  int i=0;  
      
   for(i=0;i<iLength;i++)
   {
     if(Arr[i]<=0)
     {
       continue;
     }
     
     if(Arr[i]==11)
      {        
       return TRUE;
      }
    
   }        
    
   return FALSE;
}

int main()
{
  int iSize=0,iCnt=0;
  int *P=NULL;
  BOOL bRet=FALSE;
  
  
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
   
   bRet=Check(P,iSize);
   
   if(bRet==TRUE)  
    {
      printf("\n11 is present.\n");
    }
   else
    {
      printf("\n11 is absent.\n");
    } 
    free(P);
    
    getch();
  return 0;
}