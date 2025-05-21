#include<bits/stdc++.h>
using namespace std;

bool dp[21][21][41];
bool vis[21][21][41];

bool canWin(int x, int y, int prev) {
    if (vis[x][y][prev]) return dp[x][y][prev];

    for (int take = prev + 1; take <= x; ++take) {
        if (!canWin(x - take, y, take)) {
            vis[x][y][prev] = true;
            return dp[x][y][prev] = true;
        }
    }
    for (int take = prev + 1; take <= y; ++take) {
        if (!canWin(x, y - take, take)) {
            vis[x][y][prev] = true;
            return dp[x][y][prev] = true;
        }
    }

    vis[x][y][prev] = true;
    return dp[x][y][prev] = false;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        int x, y, k;
        cin >> x >> y >> k;
        bool aliceWins = false;

        for (int first = 1; first <= k; ++first) {
            if (first <= x) {
                if (!canWin(x - first, y, first)) {
                    aliceWins = true;
                    break;
                }
            }
            if (first <= y) {
                if (!canWin(x, y - first, first)) {
                    aliceWins = true;
                    break;
                }
            }
        }

        cout << (aliceWins ? "Alice" : "Bob") << '\n';
    }

    return 0;
}