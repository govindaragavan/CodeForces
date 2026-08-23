// Online C compiler to run C program online
#include <stdio.h>
#include <string.h>
int Func(char s[]){
    int n;
    n=strlen(s);
    for(int i=n-1;i>=1;i--){
        if(s[i]==s[i-1]){
            return 1;
        }
    }
    return n;
}
int main() {
  int t;
  scanf("%d",&t);
  char s[100];
  for(int i=0;i<t;i++){
      scanf("%s", s);
      int res;
      res=Func(s);
      printf("%d
",res);
  }
  return 0;
}
  