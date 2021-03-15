#include <stdio.h>


//Compiler version gcc  6.3.0

int Tourist_Bill(int iKilometre)
{
        
    if(iKilometre<=100)
     {
       
       return(iKilometre*25);
     
     }
     else if(iKilometre>100)
     {
       
       return((100*25)+(iKilometre-100)*15);
       
     }
     
  
}

int main()
{
   int Kilometre=0,bRet=0;
   
   printf("Enter Your Bill Amount: ");
   scanf("%d",&Kilometre);
   
   bRet=Tourist_Bill(Kilometre);
   
   
  printf("\nYour Estimated Rent : %d\n",bRet);
     
  
  return 0;
}