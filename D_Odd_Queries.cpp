#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,q,sum=0;
        cin>>n>>q;
        int arr[n];
        for(int i=0;i<n;i++){
            int ele;
            cin>>ele;
            arr[i]=ele;
            sum+=ele;
        }
        while(q--){
            int temp=sum;
            int l,r,k;
            cin>>l>>r>>k;
            for(int i=l-1;i<r;i++){
                temp-=arr[i];
            }
            temp+=(k*(r-l+1));
            if(temp%2!=0)cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
    }
}