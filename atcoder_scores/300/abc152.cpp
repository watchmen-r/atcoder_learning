#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  int n;
  cin >> n;
  vector<int> p(n);
  for(int i = 0; i < n; i++){
      cin >> p[i];
  }
  int ans = 0;
  int minNum = p[0];
  for(int i =0; i<n; i++){
      if(p[i] > minNum){
      } else{
          minNum = p[i];
          ans++;
      }
  }
  cout << ans << endl;
  return 0;
}