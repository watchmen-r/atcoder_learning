#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  int a, b;
  cin >> a >> b;
  string as = "";
  string bs = "";
  for(int i = 0; i < a; i++){
      bs += to_string(b);
  }
  for(int i = 0; i < b; i++){
      as += to_string(a);
  }
  if(as >= bs)cout << bs << endl;
  else cout << as << endl;
  return 0;
}