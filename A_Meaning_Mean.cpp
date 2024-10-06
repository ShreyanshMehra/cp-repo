#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,maxi=INT_MIN;
        int i,maxi_i;
        cin>>n;
        vector<int> arr(n);
        for(i=0;i<n;i++){
            cin>>arr[i];
        }
        sort(arr.begin(),arr.end());
        long long ans1=arr[0];
        for(int i=1;i<n;i++){
            ans1=(ans1+arr[i])/2;
        }
        
        cout<<ans1<<endl;

    }
}