#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n,x;
        cin>>n>>x;
        int arr[n+2];
        for(int i=1;i<=n;i++){
            int ele;
            cin>>ele;
            arr[i]=ele;
        }
        arr[0]=0;
        arr[n+1]=x;
        int maxi=INT_MIN;
        int diff;
        for(int i=0;i<n+1;i++){
            if(i==n){
                diff=2*(arr[n+1]-arr[n]);
                if(diff>maxi)maxi=diff;
            }
            else{
                diff=arr[i+1]-arr[i];
                if(diff>maxi)maxi=diff;
            }
        }
        cout<<maxi<<endl;
    }
}