#include <iostream>
using namespace std;

int main(){
    long long T, X, D = 10;
    cin >> T;

    for(int i = 0; i < T; i++){
        cin >> X;
        while(1){                   // to check how many digits X has 
            if((X / D) == 0) break;
            D *= 10;
        }

        for(int j = 1; j <= D / 10; j *= 10){ // D / 10 ==> عشان اعرف الرقم من الدرجة كام
            cout << (X / j) % 10 << " ";
        }

        D = 10;
        cout << endl;
    }

    return 0;
}