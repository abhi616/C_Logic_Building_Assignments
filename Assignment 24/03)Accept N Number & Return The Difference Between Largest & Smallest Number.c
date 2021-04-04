/*
     Input : iSize = 6 
   
     Elements : 85 66 3 66 93 88 
 
     Output : 90   (93-3)
*/


#include <stdio.h>
#include<conio.h>

//Compiler version gcc  6.3.0

int Difference(int Arr[],int iLength)
{
   int i=0,Max=0,Min=0;
   
   for(i=0;i<iLength;i++)
    {
      
      if(i==0)
      {
        Min=Arr[i];
        Max=Arr[i];
      }
      
     if(Arr[i]>Max)
      {
        Max=Arr[i];
      }
      
     if(Arr[i]<Min)
      {
        Min=Arr[i];
      }
          
      
    }
  
  
  return Max-Min;
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
   
   iRet=Difference(P,iSize);
   
   printf("\nDifference = %d\n",iRet);
   
   free(P);
   
   getch();
   return 0;  
}