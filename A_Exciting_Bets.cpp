#include <bits/stdc++.h>
using namespace std ;

int main() {
int t ;
cin >> t ;

while(t--) {
    long long a,b ;
    cin >> a >> b ;

    //infinite exitement because maximum gcd is infinity
    if(a == b)
    cout << 0 << " " << 0 << endl ;

    else {
        //max gcd is always difference between those numbers(after performing operations i.e. adding 1 to both number or sub 1 from both number)
        long long maxgcd = abs(a-b) ;
        cout << maxgcd << " " ;
        long long ans = 0 ;
        // the gcd will repeat itself after the maximum gcd is achived 
        /* eg. max gcd is 3 and repeating after 3
        6 3 --> 3
        7 4 --> 1
        8 5 --> 1
        9 6 --> 3

        */
        long long ans1 = a%maxgcd ;
        long long ans2 = abs(maxgcd-a%maxgcd) ;
        cout << min(ans1,ans2) << endl ;
    }
}

    return 0 ;
}