#include <bits/stdc++.h>
using namespace std;


int main(){
  int n ;
  cin >> n;
  vector<int> arr ;
  for(size_t i=0;i<n;i++){
    int p;
    cin >> p;
    arr.push_back(p);
  }
  //returning the same array without the maximum element

  sort(arr.begin(),arr.end());
  for(size_t i=0;i<arr.size()-1;i++){
    cout << arr[i]<< " ";
  }
  return 0;
}
