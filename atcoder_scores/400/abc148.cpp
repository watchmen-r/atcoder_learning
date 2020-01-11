#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int n;
    cin >> n;
    int ans = 0;
    int searchNum = 1;
    int tmpNum;
    for(int i = 0; i<n;i++ ){
        cin >> tmpNum;
        if(tmpNum == searchNum) searchNum++;
        else ans++;
    }
    if(n==ans)ans=-1;
    cout << ans << endl;
    return 0;
}