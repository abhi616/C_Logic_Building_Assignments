/*
     Input : iSize = 6 
   
     Elements : 8225 665 3 76 953 858
 
     Output : 665 953 858
*/


#include <stdio.h>
#include<conio.h>

//Compiler version gcc  6.3.0

void Display(int Arr[],int iLength)
{
   int i=0,Temp=0,Cnt=0;
   
   printf("\n3 Digits Numbers Are: \n");
   
   for(i=0;i<iLength;i++)
    {
      
      Temp=Arr[i];
            
      for(;Temp>0;Temp=Temp/10)
       {
         Cnt++;
       }
       
      if(Cnt==3)
       {
         printf(" %d ",Arr[i]);        
       }
                   
       Cnt=0;
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
   
   Display(P,iSize);     
   
   free(P);
   
   getch();
   return 0;  
}