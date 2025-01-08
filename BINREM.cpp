#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n, x, k;
        cin >> n >> x >> k;
        string s;
        cin >> s;

        long long invsrn = 0, ons = 0;
        for (int i=0; i<n; i++) {
            if(s[i]=='1') ons++;
            else invsrn += ons;
        }

        if(invsrn<=x && invsrn%k==0) cout << 1 << '\n';
        else cout << 2 << '\n';
    }

    return 0;
}
