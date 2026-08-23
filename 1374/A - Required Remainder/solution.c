// Online C compiler to run C program online
#include <stdio.h>
 
int main() {
    int t;
    scanf("%d",&t);
    int x,y,n;
    for(int j=0;j<t;j++){
        scanf("%d %d %d", &x, &y, &n);
        int res;
        res=n - ( (n % x - y + x) % x );
        printf("%d
",res);
    }
    return 0;
}