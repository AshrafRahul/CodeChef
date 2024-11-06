#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--) {
        int n, x;
        cin >> n >> x;

        int eCnt = n/2;
        int oCnt = n-eCnt;

        if(x%2==0) cout << eCnt-1 << endl;
        else cout << oCnt-1 << endl;
    }

    return 0;
}
