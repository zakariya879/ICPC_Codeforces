#include <iostream>
using namespace std;

int main()
{
    long long A, B, C;
    cin >> A >> B >> C;

    long long A2 = A, B2 = B, C2 = C;

    if(A2 > B2) swap(A2, B2);
    if(A2 > C2) swap(A2, C2);
    if(B2 > C2) swap(B2, C2);

    cout << A2 << "\n" << B2 << "\n" << C2 << "\n\n";
    cout << A << "\n" << B << "\n" << C;

    return 0;
}