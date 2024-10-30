#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;

        int count=0, cnt=0;
        for(int i=1; i<=n; i++) {
            if(n%i==0) {
                if(i%2==0) count++;
                else if(i%2!=0) cnt++;
            }
        }
        if(count>cnt) cout << 1 << endl;
        else if(count==cnt) cout << 0 << endl;
        else if(count<cnt) cout << -1 << endl;
    }

    return 0;
}
