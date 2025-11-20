#include <iostream>
using namespace std;

void shift_right(long long arr[], int N, int X){
    X = X % N;
    if(X == 0) return;

    long long temp[N];
    for(int i = 0; i < N; i++){
        temp[(i + X) % N] = arr[i];
    }

    for(int i = 0; i < N; i++){
        arr[i] = temp[i];
    }
}

int main(){
    int N, X;
    cin >> N >> X;

    long long arr[N];
    for(int i = 0; i < N; i++){
        cin >> arr[i];
    }

    shift_right(arr, N, X);
    for(int j = 0; j < N; j++){
        cout << arr[j] << " ";
    }

    return 0;
}