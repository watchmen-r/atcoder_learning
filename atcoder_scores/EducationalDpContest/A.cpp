#include <bits/stdc++.h>
#include <cstdlib> 
using namespace std;
typedef long long ll;

int main(){
    int n;
    cin >> n;
    int h[n];
    int dp[n];
    for(int i = 0; i < n; i++){
        cin >> h[i];
        //一緒に初期化もやる
        dp[i] = 0;
    }
    dp[0] = 0;
    dp[1] = abs(h[1] - h[0]);
    for(int i = 2; i < n; i++){
        int tmp1 = abs(h[i] - h[i-1]);
        int tmp2 = abs(h[i] - h[i-2]);
        dp[i] = min(dp[i-1]+tmp1, dp[i-2]+tmp2);
    }
    cout << dp[n-1] << endl;
    return 0;
}