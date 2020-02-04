#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  int n;
  int k;
  cin >> n >> k;
  priority_queue<ll> queh;
  ll tmph;
  for(int i = 0; i < n; i++){
      cin >> tmph;
      queh.push(tmph);
  }
  for(int i = 0; i < k; i++){
      if(!queh.empty()) queh.pop();
  }
  ll ansh = 0;
  while(!queh.empty()){
      ansh += queh.top();
      queh.pop();
  }
  cout << ansh << endl;
  return 0;
}