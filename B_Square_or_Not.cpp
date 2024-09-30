#include<bits/stdc++.h>
using namespace std;
bool check(int n,string s){
    int row=sqrt(n);
        if(row * row != n){
            return false;
        }
        int arr[row][row];
        int p=0;
        for(int i=0;i<row;i++){
            for(int j=0;j<row;j++){
                arr[i][j]=s[p]-'0';
                p++;
                // s=s.substr(1,s.length());
            }
        }
        for(int r=1;r<row-1;r++){
            for(int c=1;c<row-1;c++){
                if(arr[r][c]!=0){
                    return false;
                }
            }
        }
        for(int r=0;r<row;r++){
            if(arr[r][0]!=1 || arr[r][row-1]!=1){
                return false;
            }
        }
        for(int c=0;c<row;c++){
            if(arr[0][c]!=1 || arr[row-1][c]!=1){
                return false;
            }

        } 
        return true;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        string s;
        cin>>n;
        cin>>s;
        if(check(n,s)){
            cout<<"Yes"<<endl;

        }
        else{
            cout<<"No"<<endl;
        }
}
}