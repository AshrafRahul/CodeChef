#include<bits/stdc++.h>
using namespace std;

void solve() {
    int N;
    cin >> N;
    vector<int> A(N);
    int count1 = 0, count2 = 0;
    for (int i = 0; i < N; ++i) {
        cin >> A[i];
        if (A[i] == 1) count1++;
        else count2++;
    }

    int ops1 = count2;
    int ops2 = (count1 + 1) / 2;
    
    if (count1 == 0) {
        cout << 0 << endl;
    } else if (count2 == 0) {
        cout << 0 << endl;
    } else {
        if (count1 % 2 == 0) {
            cout << min(ops1, ops2) << endl;
        } else {
            cout << ops1 << endl;
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--) {
        solve();
    }

    return 0;
}