#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void resultOutput(int n, vector<int> a){
    a.resize(n);
    for(int i = 0; i < n; i++){
        if(i != 0)cout << " ";
        cout << a[i];
    }
    cout << endl;
}

int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i<n;i++){
        cin >> a[i];
    }
    resultOutput(n, a);
    for(int i = 1; i<n;i++){
        int tmp = a[i];
        int j = i-1;
        while(j >=0 && a[j]>tmp){
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = tmp;
        resultOutput(n, a);
    }
    return 0;
}