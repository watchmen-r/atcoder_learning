#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  ll h;
  int n;
  cin >> h >> n;
  int tmpa;
  int suma = 0;
  for(int i = 0; i < n; i++){
        cin >> tmpa;
        suma += tmpa;
  }
  if(suma >= h){
      cout << "Yes" << endl;
  }else{
      cout << "No" << endl;
  }
  return 0;
}