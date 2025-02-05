#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int x;
    cin >> x;

    if(x<=2050 && (x+25)>=2050) cout << "YES" << '\n';
    else cout << "NO" << '\n';

    return 0;
}