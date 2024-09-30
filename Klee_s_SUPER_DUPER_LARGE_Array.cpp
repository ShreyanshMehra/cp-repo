#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        unsigned long long n,k;
        cin>>n>>k;
        unsigned long long arr[n];
        for(unsigned long long i=0; i<n; i++){
            arr[i]=k+i;
        }
        unsigned long long suml=0,sumr=0;
        unsigned long long min=INT_MAX;
        for(int i=0;i<=n/2;i++){
            for(int j=0;j<=n-2-i;j++){
                suml=suml+arr[j];
            }
            for(int j=n-i-1;j<n;j++){
                sumr=sumr+arr[j];
            }
            if(min>abs(suml-sumr)) min=abs(suml-sumr);
        }
        cout<<min<<endl;
    }
}