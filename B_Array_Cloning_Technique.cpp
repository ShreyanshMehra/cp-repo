#include<bits/stdc++.h>
using namespace std;
int findMaxFrequency(const vector<int>& arr) {
    unordered_map<int, int> freqMap;
    for (int num : arr) {
        freqMap[num]++;
    }
    
    int maxFreq = 0;
    
    for (const auto& entry : freqMap) {
        if (entry.second > maxFreq) {
            maxFreq = entry.second;
        }
    }
    
    return maxFreq;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector <int> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int max_times=findMaxFrequency(arr);
        if(n==1)cout<<0<<endl;
        else if(max_times==n)cout<<0<<endl;
        else{
            int counter=0,i=max_times-1;
            int copy=0;
            while(counter<n-max_times){
                counter+=pow(2,i);
                copy++;
                i++;
            }
            cout<<n-max_times+copy<<endl;
        }
    }
}
/* WITHOUT TLE{ uses same mapping but different approach for counting no. of operations }

{ We will use a greedy technique. Let's find the most common element in the array. Let it be x
 and let it occur k
 times in the array. Then let's make a copy where all elements are x
. To do that we can make a copy of the given array and put all x
 in one array. Now we will repeat the algorithm for the new array until we get a copy with n
 numbers x
. }

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int T;
    cin >> T;
    while (T --> 0) {
        int n;
        cin >> n;
        map<int, int> q;
        for (int i = 0; i < n; ++i) {
            int x;
            cin >> x;
            ++q[x];
        }
        int am = 0;
        for (auto &[x, y] : q) {
            am = max(am, y);
        }
        int ans = 0;
        while (am < n) {
            int d = min(n - am, am);
            ans += 1 + d;
            am += d;
        }
        cout << ans << '\n';
    }
    return 0;
}
*/