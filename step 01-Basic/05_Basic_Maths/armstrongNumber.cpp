#include <bits/stdc++.h>

using namespace std;

int armstrongNum(){
int n = 0;
   cin >> n;
int dup  = n;
int sum = 0;

while(n >0){
    int ld = n% 10;
    sum = sum +(ld*ld*ld);
    n = n/10;
}
return sum == dup;
}

int main(){
 bool finaleResult = armstrongNum();
     if (finaleResult)
        cout << "true";
    else
        cout << "false";  
    return 0;
}