#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, k;
    cin >> n >> k;

    int elmntd = n-k;
    int mny = elmntd*10000;

    cout << mny << '\n';

    return 0;
}