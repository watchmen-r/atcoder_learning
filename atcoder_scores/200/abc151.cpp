#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  int n, k, m, a, suma;
  suma = 0;
  cin >> n >> k >> m;
  for(int i = 0; i<n-1;i++){
        cin >> a;
        suma += a;
  }
  int sumave = m*n;
  int getNum = sumave - suma;
  if(getNum <= k && getNum > 0) cout << getNum << endl;
  else if(getNum<=0) cout << 0 << endl;
  else cout << -1 << endl;
  return 0;
}