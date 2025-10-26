#include <iostream>
using namespace std;

int main(){
    int T, N;
    long long F;
    cin >> T;

    for(int i = 0; i < T; i++){
        cin >> N;
        F = 1;

        for(int j = 1; j <= N; j++){
            F *= j;
        }

        cout << F << endl;
    }

    return 0;
}