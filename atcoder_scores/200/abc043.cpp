#include <bits/stdc++.h>
using namespace std;

int main ()
{
	string inputData;
    cin >> inputData;

    string tmp = "";

    for(int i = 0; i < inputData.size(); i++){
        if(inputData[i] != 'B'){
            tmp = tmp + inputData[i];
        }else{
            if(tmp.size() > 0){
                // 文字列の最後を削除する
                tmp.pop_back();
            }
        }
    }
    cout << tmp << endl;
}