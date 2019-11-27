#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ll a, b, x;
    cin >> a >> b >> x;
    ll l = 0, r = 1000000001;
    // ラムダ式、桁数を求める
    auto keta = [&](ll c){
        int res = 0;
        while(c){
            c /= 10;
            ++res;
        }
        return res;
    };
    auto f = [&](ll c){
        return a*c + b*keta(c);
    };
    while(r-l> 1){
        ll c = (l+r)/2;
        if(f(c) <= x) l = c; else r = c;
    }
    cout << l << endl;
    return 0;
}
