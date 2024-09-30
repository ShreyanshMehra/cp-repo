#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int x,y,z;
        cin>>x>>y>>z;
        if(x==y && y==z){
            cout<<"YES"<<endl;
            cout<<x<<" "<<y<<" "<<z<<endl;
        }
        else if(x==y && x>z){
            cout<<"YES"<<endl;
            cout<<x<<" "<<z<<" "<<1<<endl;
        }
        else if(x==z && x>y){
            cout<<"YES"<<endl;
            cout<<y<<" "<<z<<" "<<1<<endl;
        }
        else if(y==z && y>x){
            cout<<"YES"<<endl;
            cout<<1<<" "<<x<<" "<<z<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}