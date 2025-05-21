#include<bits/stdc++.h>
using namespace std;

int maxChocolateAliceCanKeep(int n, int m, int k) {
    int total = n*m;

    if (k<=0) return total;

    if (k>=total) return 0;

    int maxAlice = 0;

    for (int i=1; i<n; i++) {
        int part1 = i*m;
        int part2 = (n-i)*m;

        if (part1>=k) maxAlice = max(maxAlice, part2);
        if (part2>=k) maxAlice = max(maxAlice, part1);
    }

    for (int j=1; j<m; j++) {
        int part1 = n*j;
        int part2 = n*(m-j);

        if (part1>=k) maxAlice = max(maxAlice, part2);
        if (part2>=k) maxAlice = max(maxAlice, part1);
    }

    return maxAlice;
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;

    while (t--) {
        int n, m, k;
        cin >> n >> m >> k;
        cout << maxChocolateAliceCanKeep(n, m, k) << '\n';
    }

    return 0;
}