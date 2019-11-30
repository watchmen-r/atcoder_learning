#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    int n;
    cin >> n;
    vector<int> r(n);
    for(int i = 0; i < n; i++){
        cin >> r[i];
    }
    int maxNum = -2000000009;
    int minNum = r[0];
    for(int i = 1; i<n; i++){
        maxNum = max(maxNum, r[i] - minNum);
        minNum = min(minNum, r[i]);
    }
    cout << maxNum << endl;
    return 0;
}