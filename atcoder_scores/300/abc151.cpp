#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ll n, m, acNum, waNum, qNum;
    string res;
    cin >> n >> m;
    map<int, string> mp;
    //map<int, int> waNum;
    vector<int> p(n);
    for(int i = 0; i < n; i++){
        mp[i] = "no";
    }
    for(int i = 0;i < n; i++){
        p[i] = 0;
    }
    acNum = 0;
    waNum = 0;
    for(int i = 0; i < m; i++){
        cin >> qNum >> res;
        if(mp[qNum-1] == "AC"){
            continue;
        }else{
            if(res == "AC"){
                acNum++;
                mp[qNum-1] = "AC";
            }else{
                p[qNum-1]++;
            }
        }
    }
    for(int i = 0; i < n; i++){
        if(mp[i] == "AC")waNum += p[i];
    }
    cout << acNum << " " << waNum << endl;
    return 0;
}