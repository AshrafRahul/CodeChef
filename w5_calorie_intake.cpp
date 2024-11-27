#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int a, b, c;
    cin >> a >> b >> c;

    if((b*c)<=a) cout << a-(b*c) << '\n';
    else cout << -1 << '\n';

    return 0;
}