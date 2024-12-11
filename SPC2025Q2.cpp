#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    
    while (t--) {
        int n, k, p;
        cin >> n >> k >> p;
        
        vector<int> a(n);
        int ttlSum=0,mxChr= 0;
        
        for(int i=0; i<n; i++) {
            cin >> a[i];
            ttlSum += a[i];
            mxChr = max(mxChr, a[i]);
        }

        int varun=ttlSum-mxChr+p;
        int ved=k+mxChr;
        
        if(ved>varun) cout << "Ved\n";
        else if(varun>ved) cout << "Varun\n";
        else cout << "Equal\n";
    }

    return 0;
}
