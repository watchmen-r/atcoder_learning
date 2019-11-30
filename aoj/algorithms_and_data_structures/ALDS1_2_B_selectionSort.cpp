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
        int tmp = i;
        int minNum = a[i];
        for(int j = i+1; j < n; j++){
            if(minNum>a[j]){
                tmp = j;
                minNum=a[j];
            }
        }
        if(i!=tmp)count++;
        swap(a[i],a[tmp]);
    }
    for(int i = 0; i < n; i++){
        if(i != 0)cout << " ";
        cout << a[i];
    }
    cout << endl;
    cout << count << endl;
}