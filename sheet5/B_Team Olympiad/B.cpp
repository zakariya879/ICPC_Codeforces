#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;
    cin >> n;

    vector <int> children(n), ones, twos, threes;
    for(int i = 0; i < n; i++){
        cin >> children[i];

        if(children[i] == 1) ones.push_back(i + 1);
        if(children[i] == 2) twos.push_back(i + 1);
        if(children[i] == 3) threes.push_back(i + 1);
    }

    int smallest_team = min(ones.size(), min(twos.size(), threes.size()));
    if(smallest_team == 0) cout << "0";

    else{
        cout << smallest_team << endl;
        for(int j = 0; j < smallest_team; j++){
            cout << ones[j] << " " << twos[j] << " " << threes[j] << endl;
        }
    }

    return 0;
}