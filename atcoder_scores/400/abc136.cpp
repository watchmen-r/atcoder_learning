#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

const int INF = 1001001001;

int main(){
    string s;
    cin >> s;
    vector<int> ans(s.size(),0);
    int rtmp, ltmp;
    int rl = s.find("RL");
    int lr = s.find("LR");
    rl++, lr++;
    if(lr == 0){
        lr = s.size();
    }
    if(rl % 2 == 1){
        ans[rl-1] += 1;
    }
    if((lr-rl)%2 == 1){
        ans[rl] += 1;
    }
    ans[rl-1] += (rl / 2 + (lr-rl) / 2);
    ans[rl] +=  (rl / 2 + (lr-rl) / 2);
    if(lr != 0){
        while(true){
            int searchNum = lr;
            rl = s.find("RL", searchNum);
            lr = s.find("LR",searchNum);
            rl++, lr++;
            if(rl == 0)break;
            rtmp = rl-searchNum;
            if(lr == 0){
                ltmp = s.size() - searchNum;
            }else{
                ltmp = lr - searchNum;
            }
            if(rtmp % 2 == 1){
                ans[rl-1] += 1;
            }
            if((ltmp-rtmp) % 2 == 1){
                ans[rl] += 1;
            }
            ans[rl-1] += (rtmp / 2 + (ltmp-rtmp) / 2);
            ans[rl] +=  (rtmp / 2 + (ltmp-rtmp) / 2);
            if(lr == 0)break;
        }
    }
    for(int i = 0;i < s.size(); i++){
        cout << ans[i] << endl;
    }
    return 0;
}