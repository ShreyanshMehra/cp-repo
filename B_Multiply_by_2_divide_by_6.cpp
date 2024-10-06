#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n;
        int remain=0;
        int ans=0;
        int power_3=0,power_2=0;
        cin>>n;
        while(n%3==0){
            n/=3;
            power_3++;
        }
        while(n%2==0){
            n/=2;
            power_2++;
        }
        if(n==1 && power_3>=power_2){
            cout<<2*power_3-power_2<<endl;
        }
        else cout<<-1<<endl;

    }
}
/*  (n*2^x)/6^y = 1
    n = 2^(y-x) * 3^y
    so n only multiple of 2 and 3
    and y-x>=0 (2 raised to power non negative)
    ans=x+y
    y-x=power_2
    y=power_3
    x+y=2*power_3-power_2


*/