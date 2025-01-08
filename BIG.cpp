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

        for (int i=0; i<n; i++) {
            bool hppy=true;
            for (int j=0; j<i; j++) {
                if (a[j] > a[i]) {
                    hppy = false;
                    break;
                }
            }
            cout << (hppy ? 1 : 0) << " ";
        }
        cout << '\n';
    }

    return 0;
}