#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while(t--) {
        int a, b, c;
        cin >> a >> b >> c;

        cout << (b-a)/c << '\n';
    }

    return 0;
}