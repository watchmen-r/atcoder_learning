#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  int h, a;
  cin >> h >> a;
  int ans = 0;
  while(true){
      if(h > 0){
          h -= a;
          ans++;
      }else{
          break;
      }
  }
  cout << ans << endl;
  return 0;
}