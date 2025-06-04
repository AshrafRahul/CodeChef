#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        vector<int> A(N);
        for (int i = 0; i < N; ++i) {
            cin >> A[i];
        }
        
        int min_length = INT_MAX;
        bool found = false;
        
        for (int i = 0; i < N; ++i) {
            unordered_set<int> distinct_elements;
            for (int j = i; j < N; ++j) {
                distinct_elements.insert(A[j]);
                if (distinct_elements.size() > 2) {
                    break;
                }
                if (distinct_elements.size() == 2) {
                    int current_length = j - i + 1;
                    if (current_length < min_length) {
                        min_length = current_length;
                        found = true;
                    }
                }
            }
        }
        
        if (found) {
            cout << min_length << endl;
        } else {
            cout << -1 << endl;
        }
    }

    return 0;
}