#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long a,b,n,sum=0;
        cin>>a>>b>>n;
        long long arr[n];
        for(long long i=0;i<n;i++){
            long long ele;
            cin>>ele;
            sum+=min(a,ele);
        }
        cout<<sum+b-1<<endl;

    }
}