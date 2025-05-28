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
        
        int sumOdd = 0;
        int sumEven = 0;
        
        for (int i = 0; i < N; ++i) {
            if (i % 2 == 0) {
                sumOdd += A[i];
            } else {
                sumEven += A[i];
            }
        }
        
        cout << max(sumOdd, sumEven) << endl;
    }

    return 0;
}