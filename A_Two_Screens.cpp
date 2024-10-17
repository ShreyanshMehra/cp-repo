#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s,t;
        cin>>s>>t;
        int counter=0;
        int i=0;
        while(s[i]==t[i] && i<min(s.length(),t.length())){
            counter++;
            i++;
        }
        if(!counter) cout<<s.length()+t.length()<<endl;
        else cout<<s.length()+1+t.length()-counter<<endl;
        
    }
}