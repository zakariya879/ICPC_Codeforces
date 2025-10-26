#include <iostream>
using namespace std;

int main(){
    long long A, B, D = 10;
    int flag = 1, flag2 = 1;
    cin >> A >> B;

    for(int i = A; i <= B; i++){
        while(1){ 
            if((i / D) == 0) break;
            D *= 10;
        }

        for(int j = 1; j <= D / 10; j *= 10){
            if((i / j) % 10 != 4 && (i / j) % 10 != 7) flag = 0;
        }

        if(flag){
            flag2 = 0;
            cout << i << " ";
        }
        flag = 1;
        D = 10;
    }

    if(flag2) cout << "-1";

    return 0;
}