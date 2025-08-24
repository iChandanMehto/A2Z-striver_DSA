#include <bits/stdc++.h>

using namespace std;

int main(){
    string s; 
    cin >> s;  // here we re taking string basically  a line of bunch of random chars thats string for us.


    //precompute
    int hash[26] = {0} ;  // it means we re defining intial value of our hashing method so it cant throw random value(garbage numbers) , and it will start from 0;


    for(int i = 0; i<s.size(); i++){
        hash[s[i] -'a']++;
    }
    int q;
    cin>> q;  // here we re taking queries  basically we re taking  how much chars are in counting numbers.

    while(q--){
        char c;  // here we re taking actuall chars 
        cin>> c;
        //fetch
        cout << hash[c- 'a'] << endl;
    }
    return 0;
}