#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

typedef pair<int, int> P;

P funcA(int x){
    int a = x%10;
    int b = 0;
    while(x){
        b = x;
        x /= 10;
    }
    return P(a, b);
}

int main() {
  int n;
  cin >> n;
  map<P, int> freq;
  for(int i = 1; i <= n; i++){
    P p = funcA(i);
    freq[p]++;
  }
  ll ans = 0;
  for(int i = 1; i <= n; i++){
    P p = funcA(i);
    P q(p.second, p.first);
    ans += freq[q];
  }
  cout << ans << endl;
  return 0;
}