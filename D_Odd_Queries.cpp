#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,q;
        cin>>n>>q;
        int arr[n];
        for(int i=0;i<n;i++){
            int ele;
            cin>>ele;
            arr[i]=ele;
        }
        while(q--){
            
            int sum=0;
            int l,r,k;
            cin>>l>>r>>k;
            for(int i=0;i<n;i++){
                if(i>=l-1 && i<r)sum+=k;
                else sum+=arr[i];
            }
            if(sum%2!=0)cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
    }
}