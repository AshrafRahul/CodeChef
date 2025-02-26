#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;

        int scnd = 0;
        while(true) {
            scnd++;
            if (n==1 || n==3) {cout << scnd << endl; break;} 
            else if (n==2) n=1;
            else if (n>3) n-=2;
        }
    }

    return 0;
}