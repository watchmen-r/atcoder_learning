#include <bits/stdc++.h>
using namespace std;

int main(){
    int N, K, Q;
    cin >> N >> K >> Q;
    vector<int> score(N, K-Q);
    int A;
    for(int i = 0; i < Q; i++){
        cin >> A;
        score[A - 1] = score[A - 1] + 1;
    }
    for(int i = 0; i < N; i++){
        if(score[i] > 0){
            cout << "Yes" << endl;
        }else{
            cout << "No" << endl;
        }
    }
}