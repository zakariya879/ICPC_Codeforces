#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    long long n; cin >> n;

    vector<long long> a(n);
    for(long long i = 0; i < n; i++)
    cin >> a[i];

    vector<long long> b(n);
    for(long long j = 0; j < n; j++)
    cin >> b[j];

    vector<long long> diff(n);
    for(long long k = 0; k < n; k++)
    diff[k] = a[k] - b[k];
    sort(diff.begin(), diff.end());

    //for(auto v : diff)
    //cout << v << " ";

    long long 
    for(long long )

    return 0;
}