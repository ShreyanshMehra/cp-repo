#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        string temp = s;
        int hash[2];
        hash[0]=0;
        hash[1]=0;
        for(int i=0;i<s.size();i++){
            
            char charr='1';
            if(s[i]=='1') hash[1]++;
            else hash[0]++;
        }
        for(int i=0; i<s.size(); i++){
            if(s[i]=='1')hash[0]--;
            else hash[1]--;
            if(hash[0] == -1){
                hash[0]++;
                break;
            }
            if(hash[1] == -1){
                hash[1]++;
                break;
            }
        }
        
        cout<<hash[0]+hash[1]<<endl;
    }
}