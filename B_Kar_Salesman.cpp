#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
      int n,k;
      cin>>n>>k;
      long long maxi=LLONG_MIN;
      long long sum=0;
      vector<long long> arr(n);
      for(int i=0;i<n;i++){
        cin>>arr[i];
        sum+=arr[i];
        maxi=max(maxi,arr[i]);
      }
      if(sum%k==0)cout<<max(maxi,sum/k)<<endl;
      else cout<<max(maxi,(sum/k)+1)<<endl;;
      
    }
}