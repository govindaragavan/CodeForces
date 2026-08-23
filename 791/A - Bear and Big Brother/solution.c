// Online C compiler to run C program online
#include <stdio.h>
 
int main() {
    int a,b;
    scanf("%d %d", &a, &b);
    int w1,w2;
    w1=a;
    w2=b;
    for(int i=1;i>0;i++){
        w1*=3;
        w2*=2;
        if(w1>w2){
            printf("%d",i);
            break;
        }
    }
    return 0;
}