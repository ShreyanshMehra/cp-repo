#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        long long arr[n*k];
        for(int i=0;i<(n*k);i++){
            cin>>arr[i];
        }
        int indx1=(n*k)-1-(n/2);
        long long sum=0;
        while(k--){
            sum+=arr[indx1];
            indx1=indx1-(n/2)-1;
        }
        cout<<sum<<endl;
    }
}