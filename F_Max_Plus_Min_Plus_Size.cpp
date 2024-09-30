#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        int maxi1=INT_MIN;
        int maxi2=INT_MIN;
        int min1=INT_MAX;
        int min2=INT_MAX;
        cin >> n;
        int arr[n];
        for(int i=0;i<n;i++){
            int ele;
            cin >> ele;
            arr[i]=ele;
            if(i%2==0){
                if(arr[i]>=maxi1)maxi1=arr[i];
                if(arr[i]<=min1)min1=arr[i];
            }
            else{
                if(arr[i]>=maxi1)maxi2=arr[i];
                if(arr[i]<=min1)min2=arr[i];
            }
        }
            int ans1=maxi1+min1+((n+1)/2);
            int ans2=maxi2+min2+(n/2);
            int ans=max(ans1,ans2);
        
        cout<<ans<<endl;
    }
}