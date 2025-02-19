#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int x, y;
    cin >> x >> y;

    int mxQs = x+(10*y);

    if(mxQs>=100) cout << "YES" << '\n';
    else cout << "NO" << '\n';

    return 0;
}