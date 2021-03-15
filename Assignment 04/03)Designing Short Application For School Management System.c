#include <stdio.h>


//Compiler version gcc  6.3.0

void School_Fee(int iStandard)
{
        
    if(iStandard==1)
     {
       
       printf("\nYour Total Fee : 8900\n");
     
     }
     
     else if(iStandard==2)
     {
       
       printf("\nYour Total Fee : 12790\n");
       
     }
    
    else if(iStandard==3) 
    {
      
      printf("\nYour Total Fee : 21000\n");
      
    }
  
   else
    {
      
      printf("\nYour Total Fee : 23450\n");
            
    }
}

int main()
{
   int iStd=0;
   
   Up:
   printf("Enter Your School Standard: ");
   scanf("%d",&iStd);
   
   if(iStd<1 || iStd>4)
   {
     printf("\n\nInvalid Input...Enter Valid Standard\n\n\n");
     goto Up;
   }
   
   School_Fee(iStd);
            
  
  return 0;
}