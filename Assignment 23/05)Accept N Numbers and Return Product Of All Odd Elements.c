/* 
      Input : iSize = 6       
       
      Elements : 15 66 3 70 10 88
   
      Output : 45


      Input : iSize = 6           
      
      Elements : 44 66 72 70 10 88
      
      Output : 1
 */


#include <stdio.h>
#include<conio.h>

//Compiler version gcc  6.3.0

int Product(int Arr[],int iLength)
{
  int i=0,O_Mult=1;     
     
   for(i=0;i<iLength;i++)
   {
     if(Arr[i]<=0)
     {
       continue;
     }
     
     if(Arr[i]%2!=0)
      {        
        O_Mult=O_Mult*Arr[i];
      }
    
   }            
   
   return O_Mult;
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
   
   iRet=Product(P,iSize);     
   
   printf("\nProduct Is %d\n",iRet);  
   
   free(P);
    
   getch();
   
   return 0;
}