#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        if(n==1 || n==2)cout<<1<<endl;
        else{
            int a=2;
            while(n>((a-1)*x)+2)a++;
            cout<<a<<endl;
        }
    }
}