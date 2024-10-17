#include<bits/stdc++.h>
using namespace std;
bool isFair(long long n){
    long long temp=n;
    while(temp>0){
        if((temp%10)!=0 && n%(temp%10)!=0)return false;
        temp/=10;
    }
    return true;


}
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        while(!isFair(n))n++;
        cout<<n<<endl;
    }
}