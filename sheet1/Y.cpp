#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    long long A, B, C, D, X = 1, Y = 1;
    cin >> A >> B >> C >> D;

    if(B * log(A) > D * log(C)) cout << "YES";
    else cout << "NO";

    return 0;
}