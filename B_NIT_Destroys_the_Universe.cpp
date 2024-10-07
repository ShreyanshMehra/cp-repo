#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int count_0=0,count=0;
        vector<long long> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
            if(arr[i]==0)count++;
        }
        if(count==n)cout<<0<<endl;
        else{
            int i=0;
            while(i<arr.size()){
                if(arr[i]==0 && arr[i+1]==0){
                    arr.erase(arr.begin()+i);
                }
                else i++;
            }
            if(*(arr.end()-1)==0)arr.erase(arr.end()-1);
            if(*(arr.begin())==0)arr.erase(arr.begin());
            
            for(int i=0;i<arr.size();i++){
                if(arr[i]==0)count_0++;
            }
            cout<<count_0+1<<endl;
        }

    }
}