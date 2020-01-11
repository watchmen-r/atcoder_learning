#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
  int n, q,pNum;
  string process;
  cin >> n >> q;
  pair<string, int> pairProcess;
  queue<pair<string, int>> inputQueue;
  for(int i = 0; i< n; i++){
    cin >> process >> pNum;
    pairProcess = make_pair(process,pNum);
    inputQueue.push(pairProcess);
  }
  int finishTime = 0;
  queue<pair<string, int>> ans;
  while(inputQueue.size() != 0){
    pair<string, int> tmp = inputQueue.front();
    if(tmp.second<=q){
      finishTime+=tmp.second;
      inputQueue.pop();
      ans.push(make_pair(tmp.first, finishTime));
    }else{
      finishTime += q;
      inputQueue.pop();
      tmp.second -= q;
      inputQueue.push(tmp); 
    }
  }
  while(ans.size()!=0){
    pairProcess = ans.front();
    ans.pop();
    cout << pairProcess.first << " " << pairProcess.second << endl;
  }
  return 0;
}