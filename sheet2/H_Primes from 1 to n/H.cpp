#include <iostream>
using namespace std;

int main(){
    int N;
    bool flag = 1;
    cin >> N;

    for(int i = 2; i <= N; i++){
        for(int j = 2; j * j <= i; j++){
            if(i % j == 0) flag = 0;
        }
        if(flag) cout << i << " ";
        flag = 1;
    }

    return 0;
}