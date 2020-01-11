#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int N;
int A[20];
int x[20][20];
int y[20][20];

int counter(int x){
    if(x==0) return 0;
    return counter(x >> 1) + (x & 1);
}

int main(){
    cin >> N;
    for(int i = 1; i <= N; i++){
        cin >> A[i];
        for(int j = 1; j<=A[i]; j++){
            cin >> x[i][j] >> y[i][j];
        }
    }
    cout << (1 << N) << endl;
    int ans = 0;
    for(int bits = 1; bits < (1 << N); bits++){
        bool ok = true;
        for(int i = 1; i <= N; i++){
            if(!(bits & (1 << (i-1)))) continue;
            for(int j = 1; j <=A[i]; j++){
                if(((bits >> (x[i][j]-1)) & 1) ^ y[i][j]) ok = false;
            }
        }
        if(ok) ans = max(ans,counter(bits));
    }
    cout << ans << endl;
    return 0;
}