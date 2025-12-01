#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main(){
    int n; cin >> n;
    string direction; cin >> direction;

    vector<long long> positions(n);
    for(int i = 0; i < n; i++) cin >> positions[i];

    long long min = INT_MAX;
    bool explosion = false;

    for(int j = 0; j < n - 1; j++){
        if(direction[j] == 'R' && direction[j + 1] == 'L'){
            if(min > positions[j + 1] - positions[j]){
                min = positions[j + 1] - positions[j];
                explosion = true;
            }
        }
    }

    if(explosion) cout << min / 2;
    else cout << "-1";

    return 0;
}