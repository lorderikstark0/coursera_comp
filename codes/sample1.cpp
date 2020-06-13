/*
 *GIven a sequence of list of contatce nmaes , sort it alphabetically

 */
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
  int tl;
    cin >> tl;
    vector<string> arr1;
    while(tl-->0){
      string s;
      cin >> s;
      arr1.push_back(s);
    }
    sort(arr1.begin(),arr1.end());
    
    for(size_t i=0;i<arr1.size();i++){
      cout << arr1[i]<<"\n";
    }
    return 0;
}
