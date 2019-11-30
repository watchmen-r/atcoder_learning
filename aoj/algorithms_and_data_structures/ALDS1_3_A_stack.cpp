#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
  int x, tmp1, tmp2;
  char s[100];
  stack<int> inputStack;
  while( cin >> s ){
    if ( s[0] == '+' ){
      tmp1 = inputStack.top();
      inputStack.pop();
      tmp2 = inputStack.top();
      inputStack.pop();
      inputStack.push(tmp1 + tmp2);
    } else if ( s[0] == '-' ){
      tmp1 = inputStack.top();
      inputStack.pop();
      tmp2 = inputStack.top();
      inputStack.pop();
      inputStack.push(tmp2 - tmp1);
    } else if ( s[0] == '*' ){
      tmp1 = inputStack.top();
      inputStack.pop();
      tmp2 = inputStack.top();
      inputStack.pop();
      inputStack.push(tmp1 * tmp2);
    } else {
      x = atoi(s);
      inputStack.push(x);
    }
  }
  x = inputStack.top();
  cout << x << endl;
  return 0;
}