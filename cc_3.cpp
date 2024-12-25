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

        vector<int> a(n);
        for (int i=0; i<n; i++) cin >> a[i];

        map<int, int> mp;
        for(int i=0; i<n; i++) mp[a[i]] = max(mp[a[i]], i+1);

        int ttlPnlty = 0;
        for(auto en: mp) ttlPnlty += en.second;

        cout << ttlPnlty << '\n';
    }

    return 0;
}