#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int flag=0;
        int count=0;
        vector<int> arr(n);
        for(int i =0; i<n; i++){
            cin>>arr[i];
            if(arr[i]%k==0)flag=1;
        }
        int mini=INT_MAX;
        if(flag)cout<<0<<endl;
        else if(k==4){
            for(int i =0; i<n; i++){
                if(arr[i]%2==0)count++;
                mini=min(mini,k-(arr[i]%k));
            }
            if(count>=2)cout<<0<<endl;
            else if(count==1)cout<<1<<endl;
            else{
                cout<<min(mini,2)<<endl;
            }
        }
        else{
            for(int i =0; i<n; i++){
            mini=min(mini,k-(arr[i]%k));
            }
            cout<<mini<<endl;
        }
    }
}