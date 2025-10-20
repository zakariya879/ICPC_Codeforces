#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    float N;
    cin >> N;

    int M = N;
    float X = M;

    if(N == X) cout << "int " << M;
    if(!(N == X)) cout << "float " << M << " " << fixed << setprecision(3) << N - X;

    return 0;
}