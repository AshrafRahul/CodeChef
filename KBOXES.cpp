#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
     int T;
    cin >> T;
    
    while (T--) {
        int N, K;
        cin >> N >> K;
        vector<pair<int, int>> thieves(N);
        vector<int> B(N);
        
        for (int i = 0; i < N; ++i) {
            cin >> thieves[i].first;
            thieves[i].second = i;
        }
        
        for (int i = 0; i < N; ++i) {
            cin >> B[i];
        }
        
        sort(thieves.begin(), thieves.end());
        
        vector<long long> res(N);
        priority_queue<int, vector<int>, greater<int>> min_heap;
        long long sum = 0;
        
        for (int i = 0; i < N; ++i) {
            int idx = thieves[i].second;
            res[idx] = sum;
            
            if (min_heap.size() < K) {
                min_heap.push(B[idx]);
                sum += B[idx];
            } else if (!min_heap.empty() && B[idx] > min_heap.top()) {
                sum -= min_heap.top();
                min_heap.pop();
                min_heap.push(B[idx]);
                sum += B[idx];
            }
        }
        
        for (int i = 0; i < N; ++i) {
            cout << res[i] << " ";
        }
        cout << "\n";
    }

    return 0;
}