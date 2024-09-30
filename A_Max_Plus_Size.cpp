#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        int maxi1=INT_MIN;
        int maxi2=INT_MIN;
        int maxi=INT_MIN;
        int ans;
        cin >> n;
        int arr[n];
        for(int i=0;i<n;i++){
            int ele;
            cin >> ele;
            arr[i]=ele;
            maxi=max(maxi,arr[i]);
            if(i%2==0){
                if(arr[i]>=maxi1)maxi1=arr[i];
            }
            else{
                if(arr[i]>=maxi1)maxi2=arr[i];
            }
        }
        if(n%2==0)ans=maxi+(n/2);
        else{
            int ans1=maxi1+(n+1)/2;
            int ans2=maxi2+(n/2);
            ans=max(ans1,ans2);
        }
        
        
        cout<<ans<<endl;
    }
}