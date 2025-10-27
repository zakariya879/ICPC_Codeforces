#include <iostream>
using namespace std;

int main()
{
    long long T, N, B = 0, D = 0;
    cin >> T;

    for(int i = 0; i < T; i++){
        cin >> N;

        while(1){
            if(N % 2 == 1) B++;
            N /= 2;
            if(N == 0) break;
        }

        int counter = 0, temp = 1;
        for(int j = 0; j < B; j++){
            for(int k = 0; k < counter; k++){
                temp *= 2;
            }
            D += temp;
            temp = 1;
            counter++;
        }

        cout << D << endl;
        D = 0;
        B = 0;
    }
    
    return 0;
}