#include <bits/stdc++.h>

using namespace std;


//Print name 5 times.

void nameFun(int i, int n){
    if(i>n){
        return;
    }
    cout << "Chandan "<< endl;
    nameFun(i+1, n);
}

// print linearly from 1 to N

void lineNum(int i, int n){
    if(i>n){
        return;
    }
    cout << i<< endl;
    lineNum(i+1, n);
}

//Print from N to 1.

void notNat(int i , int n){
if(i<1){
    return;
}
cout << i<< endl;
notNat(i-1, n);
}


// print from N to 1 using backtrack
void revNum(int i , int n){
if(i<1){
    return;
}
revNum(i-1, n);
cout << i<< endl;
}

// now we have to print  N to 1by using backtrack method .


void backtrackNum(int i , int n){
    if(i < 1){
return ;
    }
    backtrackNum(i+1,n);
    cout << i << endl;

}

// Sum of first N natural numbers

int sumN(int n){
if(n == 0) return 0;
cout << n<< endl;
return n+ sumN(n-1);

}

int main(){
    int input;
    cin>> input;
sumN( input);
    return 0;
}