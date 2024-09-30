#include<bits/stdc++.h>
using namespace std;
int length(int l,int r){
    if(r-l==1){
        return 2;
    }
    else if(r-l==0){
        return 1;
    }
    else{
        int n=l;
        int k=1;
        int count=0;
        while(n<r){
            n=n+k;
            k++;
            if(n<r && r-n>=k) count++;
        }
        return count+2;
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int l,r;
        cin>>l>>r;
        cout<<length(l,r)<<endl;
    }
}
