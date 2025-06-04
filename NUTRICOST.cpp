#include<bits/stdc++.h>
using namespace std;

int maxNutritionValue(const vector<int>& A, const vector<int>& B, int C) {
    int n = A.size();

    unordered_map<int, int> minCost;
    for (int i = 0; i < n; ++i) {
        if (minCost.find(A[i]) == minCost.end() || B[i] < minCost[A[i]])
            minCost[A[i]] = B[i];
    }

    vector<int> costs;
    for (auto& [vit, cost] : minCost)
        costs.push_back(cost);

    sort(costs.begin(), costs.end());

    int maxValue = 0;
    int totalCost = 0;
    int count = 0;

    for (int c : costs) {
        totalCost += c;
        count++;
        int value = C * count - totalCost;
        if (value > maxValue)
            maxValue = value;
    }

    return maxValue;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int T;
    cin >> T;

    while (T--) {
        int N, C_val;
        cin >> N >> C_val;

        vector<int> A(N);
        for (int i = 0; i < N; ++i)
            cin >> A[i];

        vector<int> B(N);
        for (int i = 0; i < N; ++i)
            cin >> B[i];

        cout << maxNutritionValue(A, B, C_val) << endl;
    }

    return 0;
}