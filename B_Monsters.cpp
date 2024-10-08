#include<bits/stdc++.h>
using namespace std;
bool customCompare(const pair<long long, int> &a, const pair<long long, int> &b) {
    if (a.first != b.first)
        return a.first < b.first; 
    return a.second > b.second;  
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<long long> arr(n);
        vector<pair<long long, int>> index(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
            if(arr[i]%k==0) {index[i].first=k; index[i].second=i;}
            else  {index[i].first=arr[i]%k; index[i].second=i;}
        }
        int begin=0;
        int end=0; 
        sort(index.begin(),index.end(),customCompare);
        reverse(index.begin(),index.end());
        for(int i=0;i<n;i++){
            cout<<index[i].second+1<<" ";
        }
        cout<<endl;

    }
}
