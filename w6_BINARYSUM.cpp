#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;

    while(t--) {
        int n, x;
        cin >> n >> x;

        if(n%2!=0) {
            if((n/2)==x || ((n/2)+1)==x) cout << "YES" << '\n';
            else cout << "NO" << '\n';
        } else if(n%2==0) {
            if((n/2)==x) cout << "YES" << '\n';
            else cout << "NO" << '\n';
        } 
    }

    return 0;
}