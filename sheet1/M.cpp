#include <iostream>
using namespace std;

int main()
{
    int A, B;
    char S;
    cin >> A >> S >> B;

    if(S == '+') cout << A + B;
    if(S == '-') cout << A - B;
    if(S == '*') cout << A * B;
    if(S == '/') cout << A / B;

    return 0;
}