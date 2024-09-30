#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        char arr[n][4];
        int col[n];
        for(int i=0;i<n;i++){
            for(int j=0;j<4;j++){
                cin>>arr[i][j];
                if(arr[i][j]=='#'){
                    col[i]=j+1;
                }
            }
        }
        for(int i=n-1;i>=0;i--){
            cout<<col[i]<<" ";
        }
        cout<<endl;
    }
}