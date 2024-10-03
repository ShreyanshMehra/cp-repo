#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,ans=0;
        cin>>n;
        int arr[n+1];
        for(int i=1;i<=n;i++){
            cin>>arr[i];
            ans=__gcd(ans,abs(arr[i]-i));
        }
        cout<<ans<<endl;
    }
}
/* In order to move pi
 to position i
, it is easy to see that |pi−i|
 has to be divisible by k
.

So, |p1−1|,|p2−2|,…,|pn−n|
 has to be all divisible by k
. The largest possible value of k
 turns out to be the greatest common divisor of integers |p1−1|,|p2−2|,…,|pn−n|
.

Time complexity: O(n+logn) */