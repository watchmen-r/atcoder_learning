#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    string s;
    cin >> s;
    string revs = s;
    int ansCount = 0;
    for(int i = 0; i < s.size() / 2; i++){
        if(s[i] != revs[s.size()-1-i])ansCount++;
    }
    cout << ansCount << endl;
    return 0;
}