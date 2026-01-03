#include <bits/stdc++.h>

using namespace std;

int firstLoop(int n){
    for(int i = 0; i<n; i++){
        for(int j = 0; j<n; j++){
            cout << " * ";
        }
            cout << endl; 
    }
}

int secPattern(int n){
    for(int i = 0; i<n; i++){
        for(int j = 0; j<=i; j++){
            cout << " * ";
        }
            cout << endl; 
    }
}

int thirdPattern(int n){
        for(int i = 1; i<n; i++){
        for(int j = 1; j<=i; j++){
               cout << j << " ";
        }
            cout << endl; 
    }
}

int fourthPattern(int n){
        for(int i = 1; i<n; i++){
        for(int j = 1; j<=i; j++){
               cout << i << " ";
        }
            cout << endl; 
    }
}

int fifthPattern(int n){
        for(int i = 1; i<n; i++){
        for(int j = 0; j<n-i+1; j++){
            cout << "* ";
        }
            cout << endl; 
    }
}



int main(){
    int n;
    cin >> n;
    fifthPattern(n);
    return 0;
}