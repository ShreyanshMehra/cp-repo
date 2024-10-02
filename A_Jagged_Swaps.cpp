#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            int ele;
            cin>>ele;
            arr[i]=ele;
        }
        int flag=1;
        while(flag>0){
            flag=0;
            for(int i=1;i<n-1;i++){
                if(arr[i]>arr[i-1] && arr[i]>arr[i+1]){
                    int temp=arr[i];
                    arr[i]=arr[i+1];
                    arr[i+1]=temp;
                    flag++;
                }
            }
        }
        if(is_sorted(arr,arr+n))cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}