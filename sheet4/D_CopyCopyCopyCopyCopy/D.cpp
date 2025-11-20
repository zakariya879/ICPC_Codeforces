#include <iostream>
#include <set>
using namespace std;

int main(){
    int t;
    cin >> t;
    long long temp;

    for(int i = 0; i < t; i++){
        long long n;
        cin >> n;

        set<long long> s;
        for(int j = 0; j < n; j++){
            cin >> temp;
            s.insert(temp);
        }

        cout << s.size() << endl;
    }

    return 0;
}