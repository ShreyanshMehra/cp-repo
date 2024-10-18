#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        int arr[n][m];
        int sum=0;
        int mini=INT_MAX;
        int count=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin>>arr[i][j];
                mini=min(mini,abs(arr[i][j]));
                sum+=abs(arr[i][j]);
                if(arr[i][j]<0)count++;

            }
        }
        if(count%2==0)cout<<sum<<endl;
        else{
            cout<<sum-(2*mini)<<endl;
        }
        
    }
}