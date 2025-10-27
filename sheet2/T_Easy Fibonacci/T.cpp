#include <iostream>
using namespace std;

int main()
{
    int N, F1 = 0, F2 = 1;
    cin >> N;
    cout << "0 ";
    if(N >= 2) cout << "1 ";

    for(int i = 3; i <= N; i++){
        int F = F1 + F2;
        cout << F << " ";
        F1 = F2;
        F2 = F;
    }
    
    return 0;
}