#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        bool res1,res2,res3;
        
        //if b is to be changed
        int remain=(a+c);
        if(remain%(2*b)==0)res2=true;
        else res2=false;

        //if a is to be changed
        if((2*b-c)>0 && (2*b-c)%a==0)res1=true;
        else res1=false;

        // if c is to be changed
        if((2*b-a)>0 && (2*b-a)%c==0)res3=true;
        else res3=false;

        if(res1 || res2|| res3)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}