#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    long long n; cin >> n;
    long long m; cin >> m;

    long long a[n];
    for(int i = 0; i < n; i++) cin >> a[i];

    sort(a, a + n);

    long long b[m];
    for(int j = 0; j < m; j++) cin >> b[j];

    for(int k = 0; k < m; k++){
        long long counter = upper_bound(a, a + n, b[k]) - a;

        cout << counter;
        if(k < m - 1) cout << " ";
    }

    return 0;
}