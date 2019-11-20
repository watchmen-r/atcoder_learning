#include <bits/stdc++.h>
using namespace std;

int main ()
{
	int N, L;
    cin >> N >> L;
    string array[N];
    for(int i = 0; i < N; i++){
        cin >> array[i];
    }

    // やり方復習
    sort(array, array + N);
    
    for(int i = 0; i < N; i++){
        cout << array[i];
    }
    cout << endl;
}