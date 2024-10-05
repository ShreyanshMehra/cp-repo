#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        int initial_5=-1;
        int initial_55=-1;
        int initial_0=-1;
        int initial_00=-1;
        int initial_2=-1;
        int initial_7=-1;
        int flag=0,flag2=0,flag3=0;
        int flag0=0,flag4=0,flag5=0;
        
        vector<int> digits;
        

        while (n > 0) {
            digits.push_back(n % 10);
            n /= 10;
        }
        reverse(digits.begin(), digits.end());
        int no = digits.size();
        for(int i=digits.size()-1;i>=0;i--){
            if(!flag){
                if(digits[i]==5){
                    initial_5=i;
                    flag=1;
                }
            }
            else if(!flag2 || !flag3){
                if(!flag2){
                    if(digits[i]==2){
                    initial_2=i;
                    flag2=1;  
                    }
                }
                if(!flag3){
                    if(digits[i]==7){
                    initial_7=i;
                    flag3=1;
                    }
                }
            }
            if(!flag0){
                if(digits[i]==0){
                    initial_0=i;
                    flag0=1;
                }
            }
            else if(!flag4 || !flag5){
                if(!flag4){
                    if(digits[i]==0){
                    initial_00=i;
                    flag4=1;  
                    }
                }
                if(!flag5){
                    if(digits[i]==5){
                    initial_55=i;
                    flag5=1;
                }
                }
                
                
            }
        }
        int min1 = min((no-initial_5-1)+(initial_5-initial_2-1),(no-initial_5-1)+(initial_5-initial_7-1));
        int min2 = min((no-initial_0-1)+(initial_0-initial_00-1),(no-initial_0-1)+(initial_0-initial_55-1));
        cout<<min(min1,min2)<<endl;
        

    }
}