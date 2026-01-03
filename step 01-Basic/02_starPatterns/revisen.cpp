#include <bits/stdc++.h>

using namespace std;

int firstPattern(){
    int i, j;
for(int i = 1; i<=5; i++){
        for(int j  = 1; j<= 5; j++){
        if(j<=6-i){
            cout << "* ";
        }else{
            cout<< " ";
        }
    }
    cout << "\n";
}
}

int main(){
firstPattern();
}