#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while(t--) {
        int a;
        long long b, c;
        cin >> a >> b >> c;

        if(b<=a && a<=c) cout << "Take second dose now" << '\n';
        else if(b>a && a<=c) cout << "Too Early" << '\n';
        else if(b<=a && a>c) cout << "Too Late" << '\n';
    }

    return 0;
}