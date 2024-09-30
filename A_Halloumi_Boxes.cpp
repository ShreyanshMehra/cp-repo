#include <iostream>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--) {
		int n,k;
		cin>>n>>k;
		int arr[n];
        int flag=0;
		for(int i=0;i<n;i++){
		    int ele;
		    cin>>ele;
		    arr[i]=ele;
		}
        for(int j=0;j<n-1;j++){
            if(arr[j]>arr[j+1])flag++;
        }
		if(n==1)cout<<"YES"<<endl;
        else if(flag==0){
            cout<<"YES"<<endl;
        }
		else {
			if(k>1)cout<<"YES"<<endl;
			else cout<<"NO"<<endl;
		}
	}
	return 0;
}