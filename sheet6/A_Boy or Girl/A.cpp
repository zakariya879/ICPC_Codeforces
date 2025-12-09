#include <iostream>
#include <string>
#include <set>
using namespace std;

int main(){
    string str; cin >> str;
    set<char> s;

    for(char c : str) s.insert(c);

    if(s.size() % 2 == 0) cout << "CHAT WITH HER!";
    else cout << "IGNORE HIM!";

    return 0;
}