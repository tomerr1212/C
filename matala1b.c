
#include <stdio.h>

int main()
{
   char c = '4';
   printf("Enter char to count: \n");
   scanf("%c",&c);
   
   if(c != 'S' && c != 's' && c != 'M' && c != 'm'){
    printf("try");
     return(0);
  }
  
  else {
        printf("Enter the chars sequence: \n");
        char sequence= '3';
        int count =0;
        while(sequence != '$'){
           scanf("%c",&sequence);
           if(c == sequence){
               count++;
           }
        }   
        
        printf("The char with ASCII code %d appeared %d times",c ,count);
  }
   
   return(0);
}
