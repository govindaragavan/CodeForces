// Online C compiler to run C program online
#include <stdio.h>
int isPrime(int n){
    int count=0;
    for(int i=1;i<=n;i++){
        if(n%i==0)
        count++;
    }
    if(count==2)
    return 1;
    else 
    return 0;
}
int main() {
    int a,b;
    scanf("%d %d", &a, &b);
    for(int i=a+1;;i++){
        if(isPrime(i)==1 && i==b){
        printf("%s","YES");
        break;
        }
        else if(isPrime(i)==1 && i!=b){
            printf("%s","NO");
            break;
        }
}
return 0;
}