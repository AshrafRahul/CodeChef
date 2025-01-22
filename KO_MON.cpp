#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        int n;
        long long x;
        cin >> n >> x;

        vector<long long> h(n);
        for (int i=0; i<n; i++) cin >> h[i];

        sort(h.begin(), h.end());

        long long mnAtc=0;
        for (int i=0; i<n; i++) {
            long long atcNd = h[i] + (n-1-i)*x;
            mnAtc = max(mnAtc, atcNd);
        }

        cout << mnAtc << '\n';
    }

    return 0;
}