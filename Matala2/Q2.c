#include <stdio.h>
#include <string.h>

char *HighCase(char str [],char ans []);

void main(){
    int count =0;
    char str [] = "ABCDEffshskjHll## $fffYD,YDYDJ4564645";
    int size1 = strlen(str);
     for (int i = 0; i < size1; i ++){
     if( str[i]>='A' && str[i]<='Z' ){
        count++;
        }
     }
    char ans [count];
    printf("the answer is :%s" ,HighCase(str,ans));
}

char *HighCase(char str [] , char ans [] ){
    int size = strlen(str);
    int j = 0;
    for (int i = 0; i < size; i++){
        
        if( str[i]>='A' && str[i]<='Z' ){
         ans[j]=str[i];
         j++;
        }
    }
    return ans;
}