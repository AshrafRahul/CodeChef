#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;

        vector<long long> a(n);
        for (int i=0; i<n; i++) cin >> a[i];

        long long prefix_sum = 0;
        long long rslt = 0;

        for (int i=0; i<n; i++) {
            prefix_sum += a[i];
            rslt += abs(prefix_sum);
        } cout << rslt << '\n';
    }

    return 0;
}