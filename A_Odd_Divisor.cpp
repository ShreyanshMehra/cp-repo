#include<bits/stdc++.h>
using namespace std;
long long POW(int n){
    long long power=1;
    for(int i=1;i<=n;i++){
        power*=2;
    }
    return power;
}
bool isTwo(long long n){
    for(int i=0;i<=47;i++){
        if(n==POW(i))return true;
    }
    return false;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        if(isTwo(n))cout<<"NO"<<endl;
        else cout<<"YES"<<endl;

    }
}