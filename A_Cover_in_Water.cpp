#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        int flag=0;
        int count_empty=0;
        cin>>n;
        string s;
        cin>>s;
        for(int i=0;i<n;i++){
            if(s[i]=='.')count_empty++;
        }
        for(int i=0;i<n-2;i++){
            if(s[i]=='.' && s[i+1]=='.' && s[i+2]=='.'){
                flag=1;
                break;
            }
        }
        if(flag==1){
            cout<<2<<endl;
        }
        else{
            cout<<count_empty<<endl;
        }

    }
}