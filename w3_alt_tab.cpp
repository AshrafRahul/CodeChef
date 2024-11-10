#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    unordered_set<string> us;
    deque<string> v;

    for(int i=0; i<n; i++) {
        string s;
        cin >> s;

        if(us.find(s)!= us.end()) {
            auto it =find(v.begin(), v.end(), s);
            if (it!=v.end()) v.erase(it);
        }

        v.push_front(s);
        us.insert(s);
    }

    for (auto it : v) cout << it.substr(it.size()- 2);
    cout << endl;

    return 0;
}
