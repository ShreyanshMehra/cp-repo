#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k,i;
        int break_pt=0;
        int l=0;
        int maxi=INT_MIN;
        cin>>n>>k;
        int arr[n];
        for(int i=0;i<n;i++){
            int ele;
            cin>>ele;
            arr[i]=ele;
        }
        sort(arr,arr+n);
        for(i=0;i<n-1;i++){
            if(arr[i+1]-arr[i]>k){
                break_pt++;
                if(maxi<i-l+1){
                    maxi=i-l+1;
                }
                l=i+1;
            }
        }
        maxi=max(maxi,i-l+1);
        if(break_pt==0)cout<<0<<endl;
        else{
            cout<<n-maxi<<endl;
        }
    }
}