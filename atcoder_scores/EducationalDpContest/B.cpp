#include <bits/stdc++.h>
#include <cstdlib> 
using namespace std;
typedef long long ll;
const ll INF = 100100100100100100;

int main(){
    int n,k;
    cin >> n >> k;
    ll h[n];
    ll dp[n];
    for(int i = 0; i < n; i++){
        cin >> h[i];
        //一緒に初期化もやる
        dp[i] = INF;
    }
    dp[0] = 0;
    for(int i = 1; i < n; i++){
        for(int j = 0; j < k; j++){
            if(i+j>=n)break;
            ll tmp1 = abs(h[i+j] - h[i-1]);
            dp[i+j] = min(dp[i-1]+tmp1, dp[i+j]);
        }
    }
    cout << dp[n-1] << endl;
    return 0;
}