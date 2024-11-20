#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;

    while(t--) {
        int n, m;
        cin >> n >> m;

        vector<int> a(n);
        vector<int> b(m);

        for(int i=0; i<n; i++) cin >> a[i];
        for(int i=0; i<m; i++) cin >> b[i];

        int cnt=0;
        for(int i=0; i<m; i++) {
            int tp=b[i]-1;
            if(tp>=0 && tp<n && a[tp]>0) a[tp]--;
            else cnt++;
        } cout << cnt << '\n';
    }

    return 0;
}