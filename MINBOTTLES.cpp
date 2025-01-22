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
        int sum = 0;
        for(int i=0; i<n; i++) {
            int a;
            cin >> a;
            sum += a;
        }
        cout << (sum + x - 1) / x << '\n';
    }

    return 0;
}