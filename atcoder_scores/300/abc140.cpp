#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin >> N;
    vector<int> B(N-1);

    for(int i = 0; i < N - 1; i++){
        cin >> B[i];
    }
    int ans = B[0] + B[N-2];
    for(int i = 1; i < N - 1; i++){
        ans = ans + min(B[i-1], B[i]);
    } 
    cout << ans << endl;
}