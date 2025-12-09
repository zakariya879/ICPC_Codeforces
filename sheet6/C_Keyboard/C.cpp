#include <iostream>
#include <string>
using namespace std;

int main(){
    char direction; cin >> direction;
    string s; cin >> s;
    string keys = "qwertyuiopasdfghjkl;zxcvbnm,./";

    if(direction == 'R'){
        for(char c : s){
            for(int i = 0; i < keys.size(); i++){
                if(c == keys[i]) cout << keys[i - 1];
            }
        }
    }

    else{
        for(char c : s){
            for(int i = 0; i < keys.size(); i++){
                if(c == keys[i]) cout << keys[i + 1];
            }
        }
    }

    return 0;
}