#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    string str = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    map<char, int> mpdic;
    for(int i = 0; i < str.size(); i++){
        mpdic[str[i]] = i;
    }
    int tmpNum;
    string ans = "";
    string tmp1, tmp2;
    for(int i = 0; i < s.size(); i++){
        tmpNum = mpdic[s[i]];
        tmpNum = tmpNum + n;
        if(tmpNum >= 26)tmpNum = tmpNum-26;
        ans = ans + str[tmpNum];
    }
    cout << ans << endl;
    return 0;
}