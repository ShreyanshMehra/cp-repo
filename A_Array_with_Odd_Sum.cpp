#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        int flag_even=0;
        int flag_odd=0;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            int ele;
            cin>>ele;
            arr[i]=ele;
            if(ele%2==0)flag_even++;
            else flag_odd++;
        }
        if(flag_even==n)cout<<"NO"<<endl;
        else if(flag_odd==n && n%2==0)cout<<"NO"<<endl;
        else{
            cout<<"YES"<<endl;  
        }
        
        

    }
}
