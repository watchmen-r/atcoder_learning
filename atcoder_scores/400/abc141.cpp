#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    int N, M, tmp;
    ll res = 0;
    cin >> N >> M;
    priority_queue<int> A;
    for(int i = 0; i < N; i++){
        cin >> tmp;
        A.push(tmp);
    }
    for(int i = 0; i < M; i++){
        tmp = A.top() / 2;
        A.pop();
        A.push(tmp);
    }
    for(int i = 0; i < N; i++){
        res = res + A.top();
        A.pop();
    }
    cout << res << endl;
}