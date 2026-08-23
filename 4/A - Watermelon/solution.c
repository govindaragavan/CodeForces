// Online C++ compiler to run C++ program online
#include <stdio.h>
 
int main() {
    int n;
    scanf("%d",&n);
    if(n==2)
    printf("%s","NO");
    else if(n%2==0)
    printf("%s","YES");
    else
    printf("%s","NO");
    return 0;
}