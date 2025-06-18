#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        int B = static_cast<int>(sqrt(N));
        int A = B * B;
        cout << A << endl;
    }

    return 0;
}