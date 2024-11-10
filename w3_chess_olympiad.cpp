#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int x, y, z;
    cin >> x >> y >> z;

    double curScr=  x+0.5*y;
    int remGm = 4-(x+y+z);
    double mxScr = curScr+remGm;

    if(mxScr> 2) cout << "YES" << endl;
    else cout << "NO" << endl;

    return 0;
}
