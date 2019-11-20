#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    int N;
    cin >> N;
    map<string, int> dic;
    for(int i = 0; i < N; i++){
        string s;
        cin >> s;
        sort(s.begin(), s.end());
        dic[s] = dic[s] + 1;
    }
    ll ans = 0;
    ll tmp = 0;
    for(auto itr = dic.begin(); itr != dic.end(); ++itr){
        tmp = itr->second;
        if(tmp == 1) continue;

        ans = ans + ( tmp * (tmp - 1) / 2);
    }
    cout << ans << endl;
    return 0;
}