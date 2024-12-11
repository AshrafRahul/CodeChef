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

        string s, t;
        cin >> s >> t;

        int cnt=0, count=0;
        for(int i=0; i<n; i++) {
            cnt += s[i] - '0';
            count += t[i] - '0';
        }

        if ((cnt % 2) == (count % 2)) cout << "YES\n";
        else cout << "NO\n";
    }

    return 0;
}