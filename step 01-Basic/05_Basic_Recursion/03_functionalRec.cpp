#include <bits/stdc++.h>

using namespace std;

//Reverse an array using recursion

void revArr(int i, int arr[],  int n){
    if(i>= n/2) return ;
    swap(arr[i], arr[n-i-1]);
    revArr(i+1, arr, n);

}

// Check palindrome using recursion
bool func(int i, string &s) {
    if (i >= s.size() / 2) return true; // base case
    if (s[i] != s[s.size() - i - 1]) return false; // mismatch case
    return func(i + 1, s); // recursive case
}




int main(){
    string s   = "madam";
    cout << func(0, s);
    return 0;
}



// int main(){
// int n;    
// cin >> n
// int arr[n];
// for(int i = 0; i<n; i++) cin >> arr[i];
//     revArr(0, arr,n);
// for(int  i = 0;  i <n; i++) cout << arr[i] << " ";

// return 0;
// }