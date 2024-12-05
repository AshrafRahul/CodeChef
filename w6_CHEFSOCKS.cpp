#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int a, b, c;
    cin >> a >> b >> c;

    if((b+c)>=a) cout << "YES" << endl;
    else cout << "NO" << endl;

    return 0;
}