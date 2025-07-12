#include<bits/stdc++.h>
using namespace std;

bool canExist(int A, int B) {
    if (A == 0) {
        return false;
    }
    if (B == 0) {
        return true;
    }
    if (B % A != 0) {
        return false;
    }
    int k = B / A;
    return k >= 1;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int T;
    cin >> T;
    while (T--) {
        int A, B;
        cin >> A >> B;
        if (canExist(A, B)) {
            cout << "Yes\n";
        } else {
            cout << "No\n";
        }
    }

    return 0;
}