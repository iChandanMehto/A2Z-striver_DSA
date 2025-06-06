#include  <bits/stdc++.h>

using namespace std;

void print1(int n){
    for(int i = 0; i<= n; i++){
        for(int  j = 0; j<=i; j++){
            cout <<"* ";
        }
        cout <<endl;
    }
 
}

void print2(int n){
for(int  i = 0; i<=n; i++){
    for(int j= 0; j<=n; j++){
 if(j>=n-i){
    cout<<"* ";
 }else{
    cout << " ";
 }
    }
    cout <<endl;
}
}

void print3(int n){
    for(int i  = 0; i<=n; i++){
        for(int j = 0; j<=n; j++){
            if(j>=i){
                cout <<"* ";
            }else{
                cout <<" ";
            }
        }
        cout <<endl;
    }
}

void print4(int n){
for(int i = 0; i<= n; i++){
    for(int j = 0; j<=n; j++){
        if(j >=n-i){
            cout <<"*";
        }else{
     cout << " ";
        }
    }
    cout << endl;
}
}
int main(){
    int t;
    cin >>t;
for(int i = 0; i<t; i++){
    int n;
    cin >> n ;
   print4(n);
}
return 0;
}