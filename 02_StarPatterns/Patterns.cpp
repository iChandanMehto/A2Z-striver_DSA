#include <bits/stdc++.h>

using namespace std;

void print1() {
    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < 4; j++) {
            cout << "*";
        }
        cout << endl;
    }
}

void print2(int n) {  // ✅ Accept `n` as a parameter
    for(int i = 0; i < n; i++) {
        for(int j = 0; j <= i; j++) { // ✅ Use j <= i for correct pattern
            cout << "* ";
        }
        cout << endl;
    }
}

void print3(int n){
    for(int i = 1; i < n; i++) {
        for(int j = 1; j <= i; j++) { 
            cout <<  j << " ";
        }
        cout << endl;
    }
}


void print4(int n){
    for(int i = 1; i < n; i++) {
        for(int j = 1; j <= i; j++) { 
            cout <<  i << " ";
        }
        cout << endl;
    }
}

void print5(int n){
    for(int i = 1; i <= n; i++) {
        for(int j = 0; j <n-i+1; j++) { 
            cout <<   "* ";
        }
        cout << endl;
    }
}

int main() {
    int t;
    cin >> t;
    for(int i = 0; i < t; i++) {
        int n;
        cin >> n;
        print5(n);  // ✅ Pass `n` correctly to `print2()`
    }
}