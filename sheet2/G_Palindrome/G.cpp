#include <iostream>
using namespace std;

int main(){
    long long N, M = 0;
    int D = 1;
    cin >> N;
    string S = to_string(N);

    for(int i : S){
        M += (i - 48) * D;
        D *= 10;
    }
    cout << M << endl;
    if(N == M) cout << "YES";
    else cout << "NO";

    return 0;
}