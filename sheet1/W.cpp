#include <iostream>
using namespace std;

int main()
{
    long long l1, r1, l2, r2;
    cin >> l1 >> r1 >> l2 >> r2;

    if(r1 >= l2 && l1 <= r2) cout << max(l1, l2) << " " << min(r1, r2);
    else cout << "-1";

    return 0;
}