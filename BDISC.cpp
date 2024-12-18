#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> p(n);
        for (int i=0; i<n; i++) cin >> p[i];

        sort(p.begin(), p.end());

        long long ttlCst = 0;
        for(int i=0; i<n; i++) ttlCst += max(0, p[i]-i);

        cout << ttlCst << '\n';
    }

    return 0;
}