#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int toArray(int n){
      int i=0,rem,arr[100000];
     while(n>0){
         rem=n%10;
         arr[i]=rem;
         i++;
         n/=10;
     }
     int count;
     count=i;
     for(int i=0;i<count;i++){
        for(int j=i+1;j<count;j++){
            if(arr[i]==arr[j]){
            return 0;
            }
        }
    }
    return 1;
}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int n,count=0,d1,d2,i=0;
    scanf("%d",&n);
    d1=n;
    d2=n;
      int rem,arr[100000];
     while(d1>0){
         rem=d1%10;
         arr[i]=rem;
         i++;
         d1/=10;
     }
     for(int l=d2+1;;l++){
         if(toArray(l)==1){
             printf("%d",l);
             break;
         }
     }
     return 0;
}