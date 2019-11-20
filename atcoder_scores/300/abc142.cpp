#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin >> N;
    vector<int> A(N);
    for(int i = 0; i < N; i++){
        cin >> A[i];
    }
    vector<int> ans(N);

    for(int i = 0;i < N;i++){
        ans[A[i] - 1] = i + 1;
    }
    for(int i=0; i < N; i++){
        cout<<ans[i]<<endl;
    }
}