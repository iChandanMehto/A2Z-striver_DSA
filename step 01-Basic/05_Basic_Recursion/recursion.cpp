#include <bits/stdc++.h>

using namespace std;

int cnt  = 0; 
void print(){
    if(cnt ==3 )return;
    cout << cnt << endl;
cnt++;
print();
}

//Print Number 1 to 5 .

void naturalNum(int Lrange, int Urange){
    if(Lrange>Urange)
    return;
    cout << Lrange<< endl; 
    naturalNum(Lrange+1, Urange);
}


int main(){
int input;
cin >> input;
naturalNum(1, input);
return 0;
}