#include <stdio.h>


int main()
{
 
    int weight,count,sum = 0;

   printf("Welcome please enter the weight of each ingredients: \n");

    while(count<11){
 
         if(scanf("%d",&weight) !=1){
             return 0;
         } 

  
         if(weight <0){
            	break;
                }
	sum += weight;
       count++;
  
  }
    double finalProduct =sum/count;
 
    int pure = count*10;
    
     if(count <3){
        return printf("not enough ingredients");
      }

    else if(count >=11){
        return printf("too many ingredients");
   }
    
  printf("the finalProduct is: %.3f\n",finalProduct);
  printf("the pure is: %d\n ",pure);
  printf("The final product weights %.3f pounds and is %d percent pure",finalProduct,pure);
  
  return(0);
  
  
}