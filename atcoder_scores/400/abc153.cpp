#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ll h;
    cin >> h;
    ll zyou = 1;
    ll ans = 0;
    while(true){
        if(h>=1){
            ans += zyou;
            zyou *= 2;
        }else{
            break;
        }
        h /= 2;
    }
    cout << ans << endl;
    return 0;
}