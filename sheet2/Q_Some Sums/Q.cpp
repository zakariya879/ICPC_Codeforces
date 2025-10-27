#include <iostream>
using namespace std;

int main()
{
    long long N, A, B,sum = 0, temp = 0;
    string S;
    cin >> N >> A >> B;

    for(int i = 1; i <= N; i++){
        S = to_string(i);

        for(int j : S) temp += j - '0';
        if(temp >= A && temp <= B) sum += i;
        temp = 0;
    }

    cout << sum;
    
    return 0;
}