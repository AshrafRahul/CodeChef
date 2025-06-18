#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int T;
    cin >> T;

    while (T--) {
        int X, Y, Z;
        cin >> X >> Y >> Z;

        if (X > Z + 1) {
            cout << "No\n";
            continue;
        }

        if (Z == 0 && X > 0) {
            cout << "No\n";
            continue;
        }

        if (Y > 0) {
            if (Z == 0 && Y == 1) {
                cout << "No\n";
                continue;
            }
        }

        cout << "Yes\n";
    }
    return 0;
}