#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    long long t; cin >> t;

    for(int i = 0; i < t; i++){
        long long n; cin >> n;
        long long x; cin >> x;

        long long a[n];
        for(int j = 0; j < n; j++) cin >> a[j];
        sort(a, a + n);
        
        if(n == 1) cout << x + a[0] << endl;

        else{
            long long left = 1;
            long long right = a[n-1] + x;
            long long answer = a[0];
            while(left <= right){
                long long mid = left + (right - left) / 2;
                long long sum = 0;
                bool exceed = false;

                for(int k = 0; k < n; k++) {
                    if(mid > a[k]){
                        sum += (mid - a[k]);
                        if(sum > x){
                            exceed = true;
                            break;
                        }
                    }
                }

                if(exceed) right = mid - 1;
                else{
                    answer = mid;
                    left = mid + 1;
                }
            }
        
            cout << answer << endl;
        }
    }

    return 0;
}