// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         long long x,n;
//         cin>>x>>n;
//         int y=n%4;
        
//         for(long long i=1;i<=y;i++){
//             if(x%2==0){
//                 x-=i;
//             }
//             else{
//                 x+=i;
//             }
//         }
//         if(n==0)cout<<0<<endl;
//         else cout<<x<<endl;
        
//     }
// }
#include <bits/stdc++.h>
using namespace std ;

int main() {
int t;
cin >> t ;

while(t--) {
    long long ic,jump ;
    cin >> ic >> jump ;

   
    int rem = jump%4 ;
    long long i = 4*(jump/4) + 1 ;

    while(rem--) {
        // cout << "ic" <<" " << ic << endl;
        if(ic % 2 == 0)
            ic -= i ;
        
        else
            ic += i ;
        
        i++ ;
    }

    cout << ic << endl ;
}
    return 0 ;
}