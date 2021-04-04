/*
     Input : iSize = 6 
   
     Elements : 85 66 3 66 93 88 
 
     Output : 93
*/


#include <stdio.h>
#include<conio.h>

//Compiler version gcc  6.3.0

int Maximum(int Arr[],int iLength)
{
   int i=0,Max=0;
   
   for(i=0;i<iLength;i++)
    {
      
      if(i==0)
      {
        Max=Arr[i];
      }
      
     if(Arr[i]>Max)
      {
        Max=Arr[i];
      }
      
    }
  
  
  return Max;
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
    printf("\nUnable To Allocate Memory...!");
    return -1;
  }
  
  printf("\nEnter %d Elements: \n",iSize);
  
  for(iCnt=0;iCnt<iSize;iCnt++)
   {
     printf("\nEnter %d Element: ",iCnt+1);
     scanf("%d",&P[iCnt]);     
   }
   
   iRet=Maximum(P,iSize);
   
   printf("\nLargest Element From Entered Elements = %d\n",iRet);
   
   free(P);
   
   getch();
   return 0;  
}