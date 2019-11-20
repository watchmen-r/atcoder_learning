#include <bits/stdc++.h>
using namespace std;

int main(){
    int N, tmp,max;
    cin >> N;
    vector<int> H(N);
    cin >> H[0];
    max = 0;
    tmp = 0;
    for(int i = 1; i < N; i++){
        cin >> H[i];
        if(H[i] > H[i-1]){
            if(tmp > max){
                max = tmp;
            }
            tmp = 0;
            continue;
        }
        tmp++;
    }
    if(tmp > max){
        max = tmp;
    }
    cout << max << endl;
}