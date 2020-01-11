#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

// ユークリッドで最大公約数を求める
ll gcd(ll x, ll y){
    return y ? gcd(y, x%y) : x;
}

int main(){
    ll a, b, gcdNum, lcmNum;
    cin >> a >> b;
    gcdNum = gcd(a, b);
    lcmNum = a * b /gcdNum;
    cout << lcmNum << endl;
    return 0;
}