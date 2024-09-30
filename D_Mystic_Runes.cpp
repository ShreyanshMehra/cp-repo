#include <bits/stdc++.h>
using namespace std;
int main(){
    map<int,vector<char>> rune;
    rune[2]={'a','b','c'};
    rune[3]={'d','e','f'};
    rune[4]={'g','h','i'};
    rune[5]={'j','k','l'};
    rune[6]={'m','n','o'};
    rune[7]={'p','q','r','s'};
    rune[8]={'t','u','v'};
    rune[9]={'w','x','y','z'};
    
    int N,M;
    cin>>N>>M;
    string name;
    vector<string> names;
    for(int i=0;i<N;i++){
        cin>>name;
        names.push_back(name);
    }

    while(M--){
        int i=0;
        int seq;
        cin>>seq;
        while(seq>0){
            for(int j=0;j<N;j++){
                if(names[j][i]==rune[2][0])
            }
        }
    }
}