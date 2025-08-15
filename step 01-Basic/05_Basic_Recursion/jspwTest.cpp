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

//  sum of first N natural number using paramter

void sumnums(int i , int sum){
    if(i<1){
        cout << sum<< endl;
        return;
    }
    sumnums(i-1, sum+i);
}

// sum of first N natural number using functional

int  funcSum(int n){
    if(n==0)  return 0;
    return n+funcSum(n-1);

}

// factorial of first n natural  numbers 
int  factSum(int n){
    if(n==0)  return 1;
    return n*factSum(n-1);

}

//Print 1 to N

// int nNumber(int i , int n){
//     if()
// }

// int 1 to 100 recursion



// Print an array
// Given an array and its size, print all elements using recursion.
int printArr(int arr[], int i){
    if(i <1) return 0;
    printArr( arr[])
}


int main(){
    int input;
    cin>> input;
cout << printArr( input);
    return 0;
}