#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

// 三項演算子で1行で ユークリッド。最大公約数を返却する
ll gcd(ll x, ll y){ return y ? gcd(y, x%y) : x;}

// 素因数分解
vector<pair<ll,int>> factorize(ll n){
  vector<pair<ll, int>> res;
  for(ll i = 2; i*i <= n; ++i){
    // 割り切れなかったらcontinue
    if(n%i) continue;

    res.emplace_back(i,0);
    // 割り切れる間はわる
    while(n%i == 0){
      n /= i;
      res.back().second++;
    }
  }
  if (n != 1) res.emplace_back(n,1);
  return res;
}

int main() {
  ll a, b;
  cin >> a >> b;
  ll g = gcd(a, b);
  auto f = factorize(g);
  int ans = f.size() + 1;
  cout << ans << endl;
  return 0;
}