#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, m;
        int xk, yk;
        int xq, yq; 
        cin >> n >> m;
        cin >> xk >> yk;
        cin >> xq >> yq;

        set<pair<int,int>> queen_positions, king_positions;

        queen_positions.insert({xq + n, yq + m});
        queen_positions.insert({xq + n, yq - m});
        queen_positions.insert({xq - n, yq + m});
        queen_positions.insert({xq - n, yq - m});
        queen_positions.insert({xq + m, yq + n});
        queen_positions.insert({xq + m, yq - n});
        queen_positions.insert({xq - m, yq + n});
        queen_positions.insert({xq - m, yq - n});

        king_positions.insert({xk + n, yk + m});
        king_positions.insert({xk + n, yk - m});
        king_positions.insert({xk - n, yk + m});
        king_positions.insert({xk - n, yk - m});
        king_positions.insert({xk + m, yk + n});
        king_positions.insert({xk + m, yk - n});
        king_positions.insert({xk - m, yk + n});
        king_positions.insert({xk - m, yk - n});

        // counting common squares from where knight can attack
        int count = 0;
        for (auto pos : queen_positions) {
            if (king_positions.count(pos)) {
                count++;
            }
        }
        cout << count << endl;
    }
}
