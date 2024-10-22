#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        int count_1=0;
        int count_0=0;
        int test=0;
        string s;
        cin>>n;
        cin>>s;
        for(int i=0;i<n;i++){
            if(s[i]=='1')count_1++;
            else count_0++;
            if(s[i]==s[i+1] && s[i]=='1' && i<n-1)test=1;
        }
        if(test==1)cout<<"YES"<<endl;
        else if(s[0]=='1' || s[n-1]=='1')cout<<"YES"<<endl;
        else if(count_0>count_1)cout<<"NO"<<endl;
        else cout<<"YES"<<endl;

    }
}