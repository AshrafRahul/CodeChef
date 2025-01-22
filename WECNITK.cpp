#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    string s;
    cin >> s;

    string crct = "WECNITK";

    if(s == crct) cout << "Welcome to Web Club!" << '\n';
    else cout << "Access denied" << '\n';

    return 0;
}