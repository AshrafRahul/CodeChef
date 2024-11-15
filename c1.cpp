#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int x, y, z;
    cin >> x >> y >> z;

    cout << min(((2*x)+(3*y)), (2*z)+y) << endl;

    return 0;
}