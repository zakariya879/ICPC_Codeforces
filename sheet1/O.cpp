#include <iostream>
using namespace std;

int main()
{
    long long A, B;
    cin >> A >> B;

    if(A > 0 && B > 0) cout << "Positive";
    if((A >= 0 && B <= 0) || (A <= 0 && B >= 0)) cout << "Zero";
    if(A < 0 && B < 0){
        if((A - B) % 2 == 0 || (B - A) % 2 == 0) cout << "Negative";
        if((A - B) % 2 == 1 || (B - A) % 2 == 1) cout << "Positive";
    }

    return 0;
}