#include <iostream>
using namespace std;

int main()
{
    long long A, B, C, D;
    cin >> A >> B >> C >> D;

    long long M = 1;
    M = (M * (A % 100)) % 100;
    M = (M * (B % 100)) % 100;
    M = (M * (C % 100)) % 100;
    M = (M * (D % 100)) % 100;
    
    if(M < 10) cout << "0";
    cout << M;

    return 0;
}