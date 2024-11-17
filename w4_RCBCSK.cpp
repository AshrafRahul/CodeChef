#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int a, b;
    cin >> a >> b;

    if((a-b)>=18) cout << "RCB" << '\n';
    else cout << "CSK" << '\n';
    return 0;
}