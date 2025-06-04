#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int T;
    cin >> T;
    while (T--) {
        int N, A, B, C, D;
        cin >> N >> A >> B >> C >> D;
        
        long long max_coins = 0;
        
        long long coins_all_0 = N * A;
        max_coins = max(max_coins, coins_all_0);
        
        long long coins_all_1 = N * B;
        max_coins = max(max_coins, coins_all_1);
        
        for (int x = 1; x < N; ++x) {
            int y = N - x;
            long long coins = x * A + y * B + x * y * C;
            max_coins = max(max_coins, coins);
        }
        
        for (int y = 1; y < N; ++y) {
            int x = N - y;
            long long coins = x * A + y * B + y * x * D;
            max_coins = max(max_coins, coins);
        }
        
        cout << max_coins << endl;
    }

    return 0;
}