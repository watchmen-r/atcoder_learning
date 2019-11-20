#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int a,b,anssum;
  string s;
  cin >> a >> b ;
  anssum = a * b ;
  if(anssum % 2 == 0){
    s = "Even";
  }else{
    s = "Odd";
  }
  cout << s << endl;
  
}