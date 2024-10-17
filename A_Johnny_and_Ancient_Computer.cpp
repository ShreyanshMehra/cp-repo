#include<bits/stdc++.h>
using namespace std;
bool isPowerOfTwo(long long n) {
    if (n <= 0)
        return false;
    return (n & (n - 1)) == 0;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n,m;
        long long a,b;
        cin>>n>>m;
        if(n>m){
            a=n;
            b=m;
        }
        else{
            a=m;
            b=n;
        }
        long long division = a/b;
        int op=0;
        if(a==b)cout<<0<<endl;
        else if(a%b!=0 || !isPowerOfTwo(division))cout<<-1<<endl;
        else{
            long long power = log2(division);
            op=op+(power/3);
            if(power%3!=0)op++;
            cout<<op<<endl;
        }
    }
}