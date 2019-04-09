#include <stdio.h>
#include <math.h>

void SAverges(int arr[],int size);

int main(){
   
  int n=1;
    printf("Enter size of array: \n");
    scanf("%d", &n);
    int arr[n];
    int sum=0;
    printf("Enter a values to array : \n");
    for (int i = 0 ; i < n; ++i) {
        scanf("%d", &arr[i]);
    }
    SAverges(arr,n);
}

void SAverges(int arr[],int size){
    
    int sum = 0;
     for (int i = 0 ; i < size; ++i) {
        sum= sum+arr[i];
    }
    double averge = 0;
    averge = sum/size;
    int count = 0;
    double mone = 0;
    while(count<size){
       double a = 0;
       a =arr[count]-averge;
       printf("%f\n",a);
       mone =mone + pow(a,2.0);
       count++;
    }
    double ans = 0;
    ans = mone/size;
    ans = sqrt(ans);
    printf("Youre answer is: %f\n",ans);
    printf("The averge is: %f",averge);
    
}