#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long int n;
        cin>>n;
        long long int maxi=1;
        long long int length=1;
        for(long long int i=1;i<pow(n,0.5);i++){
            if(n%i!=0){
                length = 1 ;
            }
            else length++;
            maxi = max(maxi,length);
        }
        cout << maxi + 1 << endl ;
    }
}