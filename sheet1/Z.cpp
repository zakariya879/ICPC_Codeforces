#include <iostream>
using namespace std;

int main()
{
    long long N;
    cin >> N;

    long long R50 = N % 100;
    long long R25 = R50 % 50;
    long long R10 = R25 % 25;
    long long R5 = R10 % 10;
    long long R2 = R5 % 5;
    long long R1 = R2 % 2;

    cout << N / 100 << " : From 100,00$\n"
         << R50 / 50 << " : From 50,00$\n"
         << R25 / 25 << " : From 25,00$\n"
         << R10 / 10 << " : From 10,00$\n"
         << R5 / 5 << " : From 5,00$\n"
         << R2 / 2 << " : From 2,00$\n"
         << R1 / 1 << " : From 1,00$";

    return 0;
}