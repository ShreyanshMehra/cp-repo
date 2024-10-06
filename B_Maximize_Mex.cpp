#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,x;
        int mex=0;
        int maxi=INT_MIN;
        int flag=0;
        cin>>n>>x;
        vector <int> arr(n);
        unordered_map<int, int> hash;        
        for(int i=0;i<n;i++){
            cin>>arr[i];
            hash[arr[i]]++;
            maxi=max(maxi,arr[i]);
        }
        sort(arr.begin(),arr.end());
        if(arr[0]!=0)cout<<0<<endl;
        else{
            for(int i=0;i<n-1;i++){
            if(arr[i+1]-arr[i]>1){
                long long num1=arr[i]+1;
                int i=1;
                while(arr[i+1]-num1>=1){
                    if(hash[num1-x]>1){
                        hash[num1-x]--;
                        continue;
                    }
                    else{
                        mex=num1;
                        flag=1;
                        break;
                    }
                    num1+=i;
                    i++;
                }
            }
            if(flag)break;
            }
            if(flag==0)mex=maxi;
            cout<<mex<<endl;
        }
        
    }
}