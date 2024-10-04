#include<bits/stdc++.h>
using namespace std;
int findMaxFrequency(const vector<int>& arr) {
    unordered_map<int, int> freqMap;
    for (int num : arr) {
        freqMap[num]++;
    }
    
    int maxFreq = 0;
    
    for (const auto& entry : freqMap) {
        if (entry.second > maxFreq) {
            maxFreq = entry.second;
        }
    }
    
    return maxFreq;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector <int> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int max_times=findMaxFrequency(arr);
        if(n==1)cout<<0<<endl;
        else if(max_times==n)cout<<0<<endl;
        else{
            int counter=0,i=max_times-1;
            int copy=0;
            while(counter<n-max_times){
                counter+=pow(2,i);
                copy++;
                i++;
            }
            cout<<n-max_times+copy<<endl;
        }
    }
}