#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    int N, K;
    string S;
    cin >> N >> K;
    cin >> S;
    int result = 0;
    for(int i = 0; i < N - 1; i++){
        if(S[i] == S[i+1]) result++;
    }
    int ans = min(result + 2 * K, N - 1);
    cout << ans << endl;
}