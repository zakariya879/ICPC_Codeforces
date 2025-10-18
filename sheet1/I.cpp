#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    long long A, B, C;

    cin >> A >> B >> C;
    cout << min({A, B, C}) << " " << max({A, B, C});

    return 0;
}