/* 
      Input : iSize = 6 
      
       iNo = 66
      
      Elements : 85 66 11 80 93 88 
   
      Output : True


      Input : iSize = 6
      
      iNo = 40
 
      Elements : 85 66 3 80 93 88 
      
      Output : FALSE
 */


#include <stdio.h>
#include<conio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

//Compiler version gcc  6.3.0

BOOL Check(int Arr[],int iLength,int iNo)
{
  int i=0;  
      
   for(i=0;i<iLength;i++)
   {
     if(Arr[i]<=0)
     {
       continue;
     }
     
     if(Arr[i]==iNo)
      {        
       return TRUE;
      }
    
   }        
    
   return FALSE;
}

int main()
{
  int iSize=0,iCnt=0,iValue=0;
  int *P=NULL;
  BOOL bRet=FALSE;
  
  
  printf("Enter Number Of Elements: ");
  scanf("%d",&iSize);
  
  
  printf("\nEnter The Number: ");
  scanf("%d",&iValue);
  
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
   
   bRet=Check(P,iSize,iValue);
   
   if(bRet==TRUE)  
    {
      printf("\nNumber is present.\n");
    }
   else
    {
      printf("\nNumber is absent.\n");
    } 
    free(P);
    
    getch();
  return 0;
}