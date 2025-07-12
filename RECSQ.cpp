#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int A, B, C;
    cin >> A >> B >> C;
    
    int rectangleArea = A * B;
    int squareArea = C * C;
    
    if (rectangleArea == squareArea) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}