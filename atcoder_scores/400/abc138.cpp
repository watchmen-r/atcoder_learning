#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

// グラフを記憶させる中身が配列のvector
vector<int> to[200005];
vector<int> ans;

// 深さ優先探索
void dfs(int v, int p=-1){
    for(int u : to[v]){
        if(u == p) continue;
        ans[u] += ans[v];
        dfs(u,v);
    }
}

int main(){
    int N, Q;
    cin >> N >> Q;
    // グラフを格納している
    for(int i = 0; i < N - 1; i++){
        int a, b;
        cin >> a >> b;
        --a; --b;
        // 双方向のグラフをここで覚えさせる
        to[a].push_back(b);
        to[b].push_back(a);
    }
    ans.resize(N);
    for(int i = 0; i < Q; i++){
        int p, x;
        cin >> p >> x;
        --p;
        ans[p] += x;
    }
    dfs(0);
    for(int i = 0; i < N; i++){
        cout << ans[i] << endl;
    }
    return 0;
}