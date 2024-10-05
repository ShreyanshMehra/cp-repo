#include<bits/stdc++.h>
using namespace std;
long long POW(long long n){
    long long power=1;
    for(long long i=1;i<=n;i++){
        power*=2;
    }
    return power;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        long long count_0=0,count_1=0;
        vector<long long> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
            if(arr[i]==0)count_0++;
            if(arr[i]==1)count_1++;
        }
        cout<<count_1*(POW(count_0))<<endl;

    }
}