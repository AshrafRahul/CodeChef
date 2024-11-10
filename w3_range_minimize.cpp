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

        vector<int> a(n);
        for(int i=0; i<n; i++) cin >> a[i];

        sort(a.begin(), a.end());
        int op1 = a[n-1]-a[2];
        int op2 = a[n-3]-a[0];
        int op3 = a[n-2]-a[1];
        cout << min({op1, op2, op3}) << endl;
    }

    return 0;
}
