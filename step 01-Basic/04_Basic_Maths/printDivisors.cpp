#include <bits/stdc++.h>
using namespace std;

void printDivisors(int n){
for( int i = 1; i<= n; i++){
    if(n%i== 0){
        cout << i<< " ";
    }
}
}

void printSecondDivisor(int n){
vector <int > ls;
for(int i = 1; i<= sqrt(n); i++){
    if(n%i == 0){
        ls.push_back(i);
        if((n/i)!= i){
            ls.push_back(n/i);
        }
    }
}
sort(ls.begin(), ls.end());
for(auto it: ls) cout << it << " ";

}

/*Prime Number : */

void primeNumber(){
    int n;
    cin >> n;
    int cnt = 0;
    for(int i = 1;  i*i<= n;  i++){
        if(n%i ==0){
            cnt ++;
            if((n/i) != i) cnt ++;

        }
    }
if(cnt == 2) cout << "true";
else cout << "false";
}


int main(){
    int n; 
    cin >> n;
    primeNumber();

    return 0;
}