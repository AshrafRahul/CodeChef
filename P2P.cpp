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
        string a, b;
        cin >> a >> b;

        int cnt = 0;
        bool psbl = false;

        for(int i=0; i<n; i++) {
            if(a[i]=='1' || b[i]=='1') cnt++;
            if((a[i]=='0' && b[i]=='1') || (a[i]=='1' && b[i]=='0')) psbl = true;
        }

        if (cnt%2 == 1) cout << "YES" << '\n';
        else if (psbl) cout << "YES" << '\n';
        else cout << "NO" << '\n';
    }

    return 0;
}
