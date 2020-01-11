#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll score;
string janken[100010];

int main() {
    int n;
    ll k, r, s, p;
    string t, win, aiko;
    cin >> n >> k >> r >> s >> p >> t;
    map<string, ll> mp;
    mp["r"] = r;
    mp["s"] = s;
    mp["p"] = p;
    score = 0;
    for(int i = 0; i < n; i++){

        if(t[i] == 'r'){
            win = 'p';
        }else if(t[i] == 's'){
            win = 'r';
        }else{
            win = 's';
        }
        if(i < k){
            janken[i] = win;
            score += mp[win];
            continue;
        }

        if(janken[i-k] == win){
            janken[i] = t[i];
            continue;
        }
        janken[i] = win;
        score += mp[win];
    }
    cout << score << endl;
    return 0;
}