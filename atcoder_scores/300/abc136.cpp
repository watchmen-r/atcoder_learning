#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    int n;
    cin >> n;
    vector<int> h(n);
    for(int i = 0; i < n; i++){
        cin >> h[i];
    }
    bool outputFlag = true;
    if(n == 2){
        if(h[0]-2 >= h[1]){
            cout << "No" << endl;
            outputFlag = false;
        } 
    }else{
        int maxNum = h[0];
        for(int i = 1; i < n;i++){
            if(maxNum-2 >= h[i]){
                cout << "No" << endl;
                outputFlag = false;
                break;
            }else{
                maxNum = max(maxNum, h[i]);
            }
        }
    }
    if(outputFlag) cout << "Yes" << endl;
    return 0;
}