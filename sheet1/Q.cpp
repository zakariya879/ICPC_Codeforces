#include <iostream>
using namespace std;

int main()
{
    long long N;

    cin >> N;
    cout << N / 365 << " years\n"
    << (N % 365) / 30 << " months\n"
    << (N % 365) % 30 << " days";

    return 0;
}