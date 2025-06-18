#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int N;
    cin >> N;
    
    if (N % 3 == 0) {
        cout << 0 << endl;
    } else {
        cout << 1 << endl;
    }

    return 0;
}