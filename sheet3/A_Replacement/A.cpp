#include <iostream>
using namespace std;

int main(){
    long long N;
    cin >> N;

    long long A[N];
    for(long long i = 0; i < N; i++) cin >> A[i];

    for(long long j = 0; j < N; j++){
        if(A[j] > 0) cout << "1 ";
        else if(A[j] < 0) cout << "2 ";
        else cout << "0 ";
    }
    return 0;
}