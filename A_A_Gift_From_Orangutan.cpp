#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int maxi=INT_MIN;
        int mini=INT_MAX;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
            maxi=max(maxi,arr[i]);
            mini=min(mini,arr[i]);
        }
        if(n==1)cout<<0<<endl;
        else{

            cout<<(n-1)*(maxi-mini)<<endl;
        }
    }
}