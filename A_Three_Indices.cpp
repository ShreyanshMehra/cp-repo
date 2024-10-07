#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        int flag=0;
        int adjust=0;
        cin>>n;
        vector<int> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        while(arr.size()>2){
            auto it = max_element(arr.begin(), arr.end());
            if(*(arr.begin())!=*it && *(arr.end()-1)!=*it){
                flag=1;
                cout<<"YES"<<endl;
                cout<<distance(arr.begin(), it-1)+1+adjust<<" "<<distance(arr.begin(), it)+1+adjust<<" "<<distance(arr.begin(), it+1)+1+adjust<<endl;
                break;
            }
            else{
                if(arr.begin()==it)adjust++;
                arr.erase(it);
            }
        }
        if(!flag)cout<<"NO"<<endl;
    }
}