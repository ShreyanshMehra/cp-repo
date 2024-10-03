#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,opp=0;
        cin>>n;
        int flag=1;
        vector <int> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        for(int i=n-2;i>=0;i--){
            if(arr[i+1]==0){
                flag=0;
                break;
            }
            else{
                while(arr[i+1]<=arr[i]){
                    arr[i]=arr[i]/2;
                    opp++;
                }
            }
        }
        if(flag)cout<<opp<<endl;
        else cout<<-1<<endl;
    }
}