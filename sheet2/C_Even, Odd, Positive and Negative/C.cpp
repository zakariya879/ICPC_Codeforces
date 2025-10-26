#include <iostream>
using namespace std;

int main(){
    int N, even = 0, odd = 0, positive = 0, negative = 0;
    long long temp;
    cin >> N;

    for(int i = 0; i < N; i++){
        cin >> temp;

        if(temp > 0) positive++;
        if(temp < 0) {negative++; temp = -1 * temp;}
        if(temp % 2 == 0) even++;
        if(temp % 2 == 1) odd++;
    }

    cout << "Even: " << even << endl
         << "Odd: " << odd << endl
         << "Positive: " << positive << endl
         << "Negative: " << negative;

    return 0;
}