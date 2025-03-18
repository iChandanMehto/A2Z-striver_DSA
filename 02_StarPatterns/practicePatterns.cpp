#include  <bits/stdc++.h>

using namespace std;

void funcOne(int n){
    for(int i = 1; i <=n; i++){
        for(int j = 1; j<=i; j++){
            cout << "* ";
        }
        cout <<endl;
    }
}

void funcTwo(int n){
    for(int i = 1; i<n; i++){
        for(int j = 1; j<n; j++){
            
                cout << "*";
            
        }
        cout <<endl;
    }
}


int main(){
int n;
cin >>n;
funcTwo(n);
return 0;
}