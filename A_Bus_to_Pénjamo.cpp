#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,r;
        cin>>n>>r;
        int arr[n];
        int happy=0;
        int pair=0;
        int single=0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            if(arr[i]%2==0){
                happy+=arr[i];
                pair+=arr[i]/2;
            }
            else{
                happy+=(arr[i]-1);
                single++;
                if(arr[i]-1)pair+=(arr[i]/2);
            }
        }
        if(single>r-pair){
            happy=happy+(r-pair-(single-(r-pair)));
        }
        else{
            happy+=single;
        }
        cout<<happy<<endl;

    }
}