#include <bits/stdc++.h>

using namespace std;


//Print Name 5 Times

void nameFun(int i, int n){
    if(i>n){
        return;
    }
          cout<< "Chandan"<< endl;
     nameFun(i+1, n);
}

// Print numbers from 1 to N using recursion
void numFun(int i, int n){
    if(i>n){
        return;
          
    }
  cout << i<< endl;
    numFun(i+1, n);
}

// Print numbers from N to 1 using recursion
void revFun(int i) {
    if (i < 1) {
        return;
    }
    cout << i << endl;
    revFun(i - 1);
}

int main(){
int input ;
cin >> input;
revFun(input);
    return 0;
}