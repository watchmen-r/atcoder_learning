#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    int n,a,b;
    cin >> n;
    vector<vector <int>> gra(n-1);
    vector<int> anum(n-1);
    for(int i = 0; i < n-1; i++){
        cin >> a >> b;
        gra[a].push_back(b);
        anum[i] = a;
    }
    int maxNum = 0;
    for(int i = 0; i < n-1; i++){
        int tmpNum = gra[anum[i]].size();
        maxNum = max(maxNum, tmpNum+1);
    }
    cout << maxNum << endl;
    map<int, int> conNum;
    conNum[0] = 0;
    int tmp=0;
    for(int i = 0; i < n-1; i++){
        if(tmp == anum[i])continue;
        tmp = anum[i];
        int ans = 0;
        for(int j : gra[anum[i]]){
            ans++;
            if(conNum[tmp] == ans)ans++;
            conNum[j] = ans;
            cout << ans << endl;
        }
    }
    return 0;
}