#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin>>n;
        vector<int> a(n);
        int one=0,minusone=0;
        for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]==1) one++;
        else if(a[i]==-1) minusone++;}
 
        if(minusone==n && n>1){
       a[0]=1;
       a[n-1]=1;
       for(int i=1;i<n-1;i++) a[i]=0;
        }
        int zero=n-one-minusone;
        int pone=0;
        for(int i=0;i<n;i++){
          if(a[i]==1) {pone++; one--;}
          if(a[i]==-1){ 
                   minusone--;
            if(pone==0){ a[i]=1; pone++;}
           else if(pone>0 && (minusone>0 || one>0)) a[i]=0; 
           else if(one==0) a[i]=1;
            if(one==0 && minusone==0) a[i]=1;
 
        }
        }
       for( int x : a ) cout<<x <<" ";
       cout<<endl;
 
    }
    
    return 0;
}