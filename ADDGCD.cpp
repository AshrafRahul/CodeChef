#include<bits/stdc++.h>
using namespace std;

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        int x, y;
        cin >> x >> y;
        if (gcd(x, y) > 1) {
            cout << 0 << endl;
            continue;
        }
        if (gcd(x + 1, y) > 1 || gcd(x, y + 1) > 1) {
            cout << 1 << endl;
        } else {
            cout << 2 << endl;
        }
    }

    return 0;
}