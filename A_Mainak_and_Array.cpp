#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        int i;
        cin>>n;
        int arr[n];
        int mini=INT_MAX;
        int min_index=0,max_index=0;
        int maxi=INT_MIN;
        int max_sum1=INT_MIN;
        int max_sum2=INT_MIN;
        for(i=0;i<n;i++){
            int ele;
            cin>>ele;
            arr[i]=ele;
            if(mini>=ele){
                mini=ele;
                min_index=i;
                if(i!=0){
                    max_sum1=max(max_sum1,arr[i-1]-arr[i]);
                }
            }
            if(maxi<=ele){
                maxi=ele;
                max_index=i;
                if(i!=n-1){
                    max_sum2=max(max_sum2,arr[i]-arr[i+1]);
                }
            }
        }
        if(n==1){
            cout<<0<<endl;continue;
        }
        else if(max_index==n-1){
            cout<<maxi-mini<<endl;
        }
        else if(min_index==0){
            cout<<maxi-mini<<endl;
        }
        else {
            cout<<max(maxi-arr[0],max(max_sum1,max_sum2))<<endl;
        }
    }
}