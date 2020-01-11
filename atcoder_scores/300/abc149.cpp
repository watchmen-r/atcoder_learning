#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int x;
    cin >> x ;
    bool primeFlag = true;
    if(x<= 3 || x == 5 || x == 7){
        // ルートにして3より小さくなる素数はそのまま出力
    }else{
        while(primeFlag){
            //2の倍数であればスキップ(多いので)
            if(x % 2 == 0){
                x++;
                continue;
            }
            // 素数を見つける試し割法
            int sqrtNum = sqrt(x);
            for(int i = 3; i <= sqrtNum; i+=2){
                if(x % i == 0){
                    x++;
                    primeFlag = true;
                    break;
                }
                primeFlag = false;
            }
        }
    }
    cout << x << endl;
    return 0;
}