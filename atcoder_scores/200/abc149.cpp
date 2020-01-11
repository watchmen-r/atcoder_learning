#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  ll a, b, k;
  cin >> a >> b >> k;
  if(a > k){
      a = a - k;
      cout << a << " " << b << endl;
  }else if((a + b) >k){
      k = k - a;
      b = b - k;
      cout << "0" << " " << b << endl;
  }else{
      cout << "0" << " " << "0" << endl;
  }
  return 0;
}