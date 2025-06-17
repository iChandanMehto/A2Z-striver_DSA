#include <bits/stdc++.h>

//=> any number which is same on reverse is same number are called palindrom number.

using namespace std;

int palindromeNum(){
    int n;
cin >> n;
int revNum = 0;
int dup  = n;
while(n>0){
    int ld = n%10; //=> here we re taking last digit of number given by user .
    revNum =( revNum*10)  + ld; //=> and then we re wrapping it in paranthysis  and multiplying * 10  and then doing additiion to ld.

n = n/ 10;  
}
return dup == revNum;
}

int main(){
        bool result = palindromeNum();
    if (result)
        cout << "true";
    else
        cout << "false";

    return 0;
}