#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;

const int INF = 1001001001;
const int di[] = {-1, 0, 1, 0};
const int dj[] = {0, -1, 0, 1};

int main() {
    int h, w;
    cin >> h >> w;

    vector<string> s(h);
    for(int i = 0; i < h; i++){
        cin >> s[i];
    }
    int ans = 0;
    for(int i = 0; i < h;i++){
        for(int j = 0; j < w; j++){
            if(s[i][j] == '#') continue;
            vector<vector<int>> dist(h, vector<int>(w,INF));
            queue<P> q;
            auto update = [&](int i, int j, int x){
                if(dist[i][j]!=INF) return;
                dist[i][j] = x;
                q.push(P(i,j));
            };
            update(i, j, 0);
            while(!q.empty()){
                int tmpi = q.front().first;
                int tmpj = q.front().second; q.pop();
                for(int dir = 0; dir < 4; dir++){
                    int ni = i+di[dir], nj=j+dj[dir];
                    if(ni<0||ni>=h||nj<0||nj>=w) continue;
                    if(s[ni][nj]=='#')continue;
                    update(ni, nj, dist[i][j] + 1);
                }
            }
            for(int i = 0; i < h; i++){
                for(int j = 0; j < w; j++){
                    if(dist[i][j] == INF) continue;
                    ans = max(ans, dist[i][j]);
                }
            }
        }
    }
    cout << ans << endl;
    return 0;
}