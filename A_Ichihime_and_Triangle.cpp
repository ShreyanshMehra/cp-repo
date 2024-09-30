#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int a,b,c,d;
        int flag=1;
        cin>>a>>b>>c>>d;
        int x=b,y=c,z=d;
        while(flag){
            if(z<x+y)flag=0;
            else{
                z--;
            }
        }
        cout<<x<<" "<<y<<" "<<z<<endl;
    }
}