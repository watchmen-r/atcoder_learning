#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    string s;
    cin >> s;
    map<string, int> mp;
    mp["SUN"] = 0;
    mp["SAT"] = 6;
    mp["FRI"] = 5;
    mp["THU"] = 4;
    mp["WED"] = 3;
    mp["TUE"] = 2;
    mp["MON"] = 1;

    int inputNum = mp[s];
    cout << 7-inputNum << endl;
    return 0;
}