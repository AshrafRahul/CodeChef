#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--) {
        int x, y;
        cin >> x >> y; vector<int> v;

        for(int i=0; i<x/2; i++) v.push_back(1);
        for(int i=0; i<y/2; i++) v.push_back(2);
        for(int i=y/2-1; i>=0; i--) v.push_back(2);
        for(int i=x/2-1; i>=0; i--) v.push_back(1);

        for(int n: v) cout << n; cout << '\n';
    }

    return 0;
}