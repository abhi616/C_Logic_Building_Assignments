#include <stdio.h>

//Compiler version gcc  6.3.0

void Display(int iNo)
{
  int i=0;
      
      if(iNo<0)
      {
        iNo=-iNo;
      }
      
      if(iNo>10||iNo<-10)
      {
        printf("\nInvalid Number...");
        return;
      }
      
      else
       {
         switch(iNo)
          {
            case 1: 
                     printf("\nOne\n");
                     break;
            case 2:
                    printf("\nTwo\n");
                    break;
            case 3:
                    printf("\nThree\n");
                    break;
            case 4:
                    printf("\nFour\n");
                    break;
            case 5:
                    printf("\nFive\n");
                    break;
            case 6:
                    printf("\nSix\n");
                    break;
            case 7:
                    printf("\nSeven\n");
                    break;
            case 8:
                    printf("\nEight\n");
                    break;
            default:
                    printf("\nNine\n");
          }
         
       }
      
        
  return;
}

int main()
{
   int iValue=0;
   
  printf("Enter Number: ");
  scanf("%d",&iValue);
  
  Display(iValue);
  
  return 0;
}