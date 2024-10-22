#include<bits/stdc++.h>
using namespace std;
int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    int a = 1;
    for (int i = 2; i * i <= n; i++) {
      if (n % i == 0) {
        a = n / i;
        break;
      }
    }
    cout << a << ' ' << n - a << '\n';
  }
}


// TLE


// #include<bits/stdc++.h>
// using namespace std;
// int main(){

//     int t;
//     cin>>t;
//     while(t--){
//         int n;
//         int flag=0;
//         cin>>n;
//         if(n%2==0){
//             cout<<n/2<<" "<<n/2<<endl;
//             continue;
//         }
//         int a=n/2;int b=(n+1)/2;
//         while(a>1 && b<n-1){
//             if(b%a==0){
//                 flag++;
//                 break;
//             }
//             a--;
//             b++;
//         }
//         if(flag)cout<<a<<" "<<b<<endl;
//         else{
//             cout<<1<<" "<<n-1<<endl;;
//         }

//     }
// }