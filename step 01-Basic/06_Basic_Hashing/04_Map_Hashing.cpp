#include <bits/stdc++.h>

using namespace std;

int main(){
int n;
cin >> n;
int arr[n];
for(int  i  = 0; i<n; i++){
    cin >> arr[i];
}

//pre-compute;
unordered_map<int , int > mpp;  //=> declearing a int named mpp.
//=> unorderd map is bascially going to give you unorder list of ints that you created through hashing method.
for(int i  = 0; i < n; i++){
    mpp[arr[i]]++;

}

// Iterate in the map
// for(auto it : mpp){
//     cout<< it.first << "->" << it.second<< endl;
// }  //=> this is how you can see how map stores this data's 



int q;
cin >> q;
while(q--){
    int number;
    cin >> number;
    //fetch
    cout << mpp[number] << endl;

}


    return 0;
}