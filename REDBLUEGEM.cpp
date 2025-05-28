#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int R, B, P, Q;
    cin >> R >> B >> P >> Q;
    
    int redTotal = R * P;
    int blueTotal = B * Q;
    
    int maxCoins = max(redTotal, blueTotal);
    
    cout << maxCoins << endl;

    return 0;
}