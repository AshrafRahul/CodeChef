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
        
        bool found = false;
        int count0 = 0, count1 = 0, count2 = 0;
        
        for (int num : A) {
            int mod = num % 3;
            if (mod == 0) {
                count0++;
            } else if (mod == 1) {
                count1++;
            } else {
                count2++;
            }
        }
        
        if (count0 > 0) {
            found = true;
        } else if (count1 >= 1 && count2 >= 1) {
            found = true;
        } else if (count1 >= 3 || count2 >= 3) {
            found = true;
        }
        
        cout << (found ? "Yes" : "No") << endl;
    }

    return 0;
}