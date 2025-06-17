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

int armstrongFunc(){
    int n = 0;
    cin >> n;
    int dupNum = n;
    int sumNum = 0;
    while(n>0){
        int lastDigit = n%10;
        sumNum = sumNum+(lastDigit*lastDigit*lastDigit);
        n= n/10;
    }
    return sumNum == dupNum;
}

int main(){
 bool finaleResult = armstrongFunc();
     if (finaleResult)
        cout << "true";
    else
        cout << "false";  
    return 0;
}