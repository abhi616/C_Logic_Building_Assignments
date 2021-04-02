/* 
      Input : iSize = 6 
                  
      Elements : 85 66 3 66 93 88
   
      Output : 0 


      Input : iSize = 6           
 
      Elements : 85 11 3 15 11 111
      
      Output : 2
 */


#include <stdio.h>
#include<conio.h>

//Compiler version gcc  6.3.0

int Frequency(int Arr[],int iLength)
{
  int i=0,Cnt=0;  
      
   for(i=0;i<iLength;i++)
   {
     if(Arr[i]<=0)
     {
       continue;
     }
     
     if(Arr[i]==11)
      {        
       Cnt++;
      }
    
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
   
   iRet=Frequency(P,iSize);
     
   printf("\nFrequency Of 11 = %d\n",iRet);
       
   free(P);
    
   getch();
   
   return 0;
}