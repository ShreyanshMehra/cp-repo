#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int x,y,k;
        cin>>x>>y>>k;
        int a = x/k;
        int b = y/k;
        int c = abs(x-y)/k;
        if(x%k!=0){
            a=(x/k)+1;
        }
        if(y%k!=0){
            b=(y/k)+1;
        }
        if(abs(x-y)%k!=0){
            c=(abs(x-y)/k)+1;
        }
        if(x%k==0 && y%k==0 && x>y) cout<<a+b<<endl;
        else{
            cout<<a+b+c<<endl;
        }
    }
}