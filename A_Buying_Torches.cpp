#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long x,y,k;
        cin>>x>>y>>k;
        long long total_sticks = (y+1)*k;
        long long trades=k;
        long long sticks = x-1;
        if((total_sticks-1)%sticks==0){
            trades+=((total_sticks-1)/sticks);
        }
        else{
            trades+=((total_sticks-1)/sticks)+1;
        }
        cout<<trades<<endl;
    }
}