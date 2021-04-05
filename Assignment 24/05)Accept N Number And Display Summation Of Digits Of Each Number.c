/*
     Input : iSize = 6 
   
     Elements : 8225 665 3 76 953 858
 
     Output : 17  17  3  13  17  21 
*/


#include <stdio.h>
#include<conio.h>

//Compiler version gcc  6.3.0

void Display_Sum(int Arr[],int iLength)
{
   int i=0,Temp=0,Sum=0;
   
   printf("\n3 Digits Numbers Are: \n");
   
   for(i=0;i<iLength;i++)
    {
      
      Temp=Arr[i];
            
      for(;Temp>0;Temp=Temp/10)
       {
         Sum=Sum+Temp%10;
       }
             
      printf(" %d ",Sum);              
                   
       Sum=0;
    }
  
  
  return;
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
   
   Display_Sum(P,iSize);     
   
   free(P);
   
   getch();
   return 0;  
}