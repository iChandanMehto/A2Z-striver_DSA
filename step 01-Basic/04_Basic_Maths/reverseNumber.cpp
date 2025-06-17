#include <bits/stdc++.h>
using namespace std;

int reverseNumber() {
int n;
cin >> n;
int revNum = 0;
while(n>0){
    int ld = n%10; //=> here we re taking last digit of number given by user .
    revNum =( revNum*10)  + ld; //=> and then we re wrapping it in paranthysis  and multiplying * 10  and then doing additiion to ld.

n = n/ 10;  

}
return revNum;
}

int main() {
int finaleRevNum = reverseNumber();
cout << finaleRevNum;
    return 0;
}
