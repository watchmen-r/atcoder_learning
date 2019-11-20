#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    int N, tmp;
    double tmp2, tmp3;
    cin >> N;
    // プライオリティキュー、小さい順から取れるよう修正
    priority_queue<int, vector<int>, greater<int>> v;
    for(int i = 0; i < N; i++){
        cin >> tmp;
        v.push(tmp);
    }
    tmp2 = v.top();
    v.pop();
    for(int i = 0; i < N-1; i++){
        tmp3 = v.top();
        v.pop();
        tmp2 = (tmp2 + tmp3) / 2;
    }
    cout << tmp2 << endl;
    return 0;
}