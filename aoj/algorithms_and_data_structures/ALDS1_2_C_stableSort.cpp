#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    int count = 0;
    for(int i = 0; i < n-1; i++){
        for(int j = 0; j < n-1-i;j++){
            if(a[j]>a[j+1]){
                int tmp = a[j+1];
                a[j+1] = a[j];
                a[j] = tmp;
                count++;
            }
        }
    }
    for(int i = 0; i < n; i++){
        if(i != 0)cout << " ";
        cout << a[i];
    }
    cout << endl;
    cout << count << endl;
}