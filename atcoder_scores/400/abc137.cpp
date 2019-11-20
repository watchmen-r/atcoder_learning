#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    int N, M;
    cin >> N >> M;
    vector<vector <int>> jobs(M);
    for(int i = 0; i < N; i++){
        int A, B;
        cin >> A >> B;
        if(A > M) continue;
        jobs[M - A].push_back(B);
    }
    priority_queue<int> Q;
    ll ans = 0;
    for(int i = M - 1; i >= 0; i--){
        for(int b : jobs[i]){
            Q.push(b);
        }
        if(!Q.empty()){
            ans += Q.top();
            Q.pop();
        }
    }
    cout << ans << endl;
    return 0;
}