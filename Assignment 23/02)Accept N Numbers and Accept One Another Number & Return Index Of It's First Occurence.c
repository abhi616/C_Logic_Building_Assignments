/* 
      Input : iSize = 6 
      
       iNo = 66
      
      Elements : 85 66 11 80 93 88 
   
      Output : 1


      Input : iSize = 6
      
      iNo = 12
 
      Elements : 85 66 3 80 93 88 
      
      Output : -1
 */


#include <stdio.h>
#include<conio.h>

//Compiler version gcc  6.3.0

int FirstOccurence(int Arr[],int iLength,int iNo)
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
       return i;
      }
    
   }        
    
   return -1;
}

int main()
{
  int iSize=0,iCnt=0,iValue=0,iRet=0;
  int *P=NULL;   
  
  
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
   
   iRet=FirstOccurence(P,iSize,iValue);
   
   
   if(iRet!=0)
   {
     printf("\nFirst Occurence Of %d = %d\n",iValue,iRet);
   }
  else
   {
     printf("\nDoesn't Contain %d In Entered Elements...!",iValue);
   }
    
   
    free(P);
    
    getch();
  return 0;
}