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

        vector<int> v(n);
        long long cSum = 0;
        for (int i=0; i<n; i++) {
            cin >> v[i];
            cSum += v[i];
        }

        long long tmrk = 100*(n+1);
        long long pMrk = tmrk/2;
        long long ndScr = pMrk-cSum;

        if (ndScr>100) cout << -1 << '\n';
        else if (ndScr<=0) cout << 0 << '\n';
        else cout << ndScr << '\n';
    }

    return 0;
}