#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        long long maxi=INT_MIN,mini=INT_MAX;
        //for odd tires we cant allot buses and for 2 tires
        if(n%2!=0 || n==2)cout<<-1<<endl;
        else{
            //for minimum buses
            if(n%6==0)mini=n/6;
            else mini=(n/6)+1;

            //for maximum buses
            maxi=n/4;
            
            cout<<mini<<" "<<maxi<<endl;
        }
    }
}