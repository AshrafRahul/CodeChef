#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int x;
    cin >> x;

    vector<int> v = {1, 2, 4};
    sort(v.begin(), v.end());

    int cnt= 0;
    for (int t: v) {
        if (x>= t) {
            x -=t;
            cnt++;
        } else break;
    }

    cout << cnt << '\n';

    return 0;
}