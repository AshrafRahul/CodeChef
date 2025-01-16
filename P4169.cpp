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

        vector<int> p(n);
        for(int i=0; i<n; i++) cin >> p[i];

        unordered_map<int, vector<int>> g;
        for(int i=0; i<n; i++) {
            int c = __builtin_popcount(p[i]);
            g[c].push_back(i);
        }

        bool ok=true;
        vector<int> sp=p;
        sort(sp.begin(), sp.end());

        for(auto &e: g) {
            vector<int> idx=e.second, vals;
            for(int i: idx) {
                vals.push_back(p[i]);
            }
            sort(vals.begin(), vals.end());

            for(size_t i=0; i<idx.size(); i++) {
                if (sp[idx[i]] != vals[i]) {
                    ok = false;
                    break;
                }
            }

            if (!ok) break;
        }

        cout << (ok ? "Yes" : "No") << "\n";
    }

    return 0;
}
