#include <bits/stdc++.h>
using namespace std;

int main ()
{
	int array[3];
    int countFive = 0;
    int countSeven = 0;
    cin >> array[0] >> array[1] >> array[2];

    for(int i=0;i<3;i++){
        if(array[i] == 5){
            countFive++;
        }
        if(array[i] == 7){
            countSeven++;
        }
    }
    if(countFive == 2 && countSeven == 1){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }
}