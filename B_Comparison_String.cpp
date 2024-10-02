#include<bits/stdc++.h>
using namespace std ;

int main(){
int t ;
cin >> t ;

while(t--) {
    int n ;
    string s ;
    cin >> n ;  cin >> s ;
    int maxi = 1;
    int length=1;
    for(int i=1;i<n;i++){
        if(s[i]!=s[i-1]){
            length = 1 ;
        }
        else length++;
        maxi = max(maxi,length) ;
    }
cout << maxi + 1 << endl ;
}
    return 0 ;
}