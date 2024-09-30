#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        long long int n;
        cin>>n;
        int flag=0;
        if(n<15){
            cout<<"NO"<<endl;
            continue;
        }
        for(int i=1;i<7;i++){
            if(n%14==i)flag++;
        }
        if(flag)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;

    }
}   