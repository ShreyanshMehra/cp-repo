#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;

    while (t--) {
        long long n,k;
        cin>>n>>k;
        int opp=0;
        if (k==1){ cout<<n<<endl;}
        else{
            while(n>0){
                opp=opp+n%k;
                n=n/k;
            }
            cout<<opp<<endl;
        }
        }
}   
