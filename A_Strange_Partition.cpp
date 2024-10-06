#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n,x;
        cin>>n>>x;
        long long sum1=0,sum2=0;
        vector<long long> arr(n);
        for(long long i=0;i<n;i++){
            cin>>arr[i];
            sum1+=arr[i];
            if(arr[i]%x==0)sum2+=arr[i]/x;
            else{
                sum2+=(arr[i]/x)+1;
            }
            
        }
        if(sum1%x==0)sum1=(sum1/x);
        else{
            sum1=(sum1/x)+1;
        }
        
        cout<<sum1<<" "<<sum2<<endl;
    }
}