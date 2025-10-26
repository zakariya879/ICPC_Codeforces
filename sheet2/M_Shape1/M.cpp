#include <iostream>
using namespace std;

int main(){
    int N, C = 0;
    cin >> N;

    for(int i = 0; i < N; i++){
        for(int j = 0; j < N - C; j++){
            cout << "*";
        }
        C++;
        cout << endl;
    }

    return 0;
}