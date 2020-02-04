#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int n;
    cin >> n;
    vector<int> p(n), q(n), a(n);
    for(int i = 0;i < n; i++){
        cin >> p[i];
    }
    for(int i = 0; i<n;i++){
        cin >> q[i];
    }
    for(int i = 0; i<n;i++){
        a[i] = i+1;
    }
    map<vector<int>, int> mp;
    do{
        mp[a] = mp.size();
    }while(next_permutation(a.begin(), a.end()));
    int ans = abs(mp[p]-mp[q]);
    cout << ans << endl;
    return 0;
}