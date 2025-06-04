#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int A, B;
    cin >> A >> B;
    
    int totalBoys = A + 1;
    int totalSlices = totalBoys * 4 + B * 3;
    int pizzasNeeded = totalSlices / 8;
    if (totalSlices % 8 != 0) {
        pizzasNeeded++;
    }
    
    cout << pizzasNeeded << '\n';

    return 0;
}