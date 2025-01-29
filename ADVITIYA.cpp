#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while(t--) {
        string s;
        cin >> s;
        string target = "ADVITIYA";
        int steps=0;
        for(int i=0; i<8; i++) {
            int diff = target[i]-s[i];
            if (diff<0) diff += 26;
            steps += diff;
        }
        cout << steps << '\n';
    }

    return 0;
}