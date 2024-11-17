#include<bits/stdc++.h>
using namespace std;

int cntGrp(string &s, char target) {
    int cnt=0, n=s.size();
    for(int i=0; i<n; i++) {
        if(s[i]==target && (i==0 || s[i-1]!=target)) cnt++;
    } return cnt;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;

        int zero = cntGrp(s, '0');
        int one = cntGrp(s, '1');

        cout << min(zero, one) << '\n';
    }

    return 0;
}