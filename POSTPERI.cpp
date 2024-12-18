#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--) {
        int n, m, k;
        cin >> n >> m >> k;
        int mnDff = INT_MAX;

        for(int i=1; i<=n; i++) {
            for (int j=1; j<=m; j++) {
                int permtr = 2*(i+j);
                mnDff = min(mnDff, abs(permtr-k));
            }
        } cout << mnDff << '\n';
    }

    return 0;
}
