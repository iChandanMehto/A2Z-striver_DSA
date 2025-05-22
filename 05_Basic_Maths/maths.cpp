#include <bits/stdc++.h>
using namespace std;

int main() {
int n; //=> first we re declaring a int for input of  nums.
cin >> n;
int revNum = 0; //=> then we re declaring another int for reversing num.
while(n>0){  //=> creating Loop of n int if its more then 0.
    
int ld = n%10;  //=> and then we re doing module so we can get the last digit.

revNum = (revNum*10)+ld;  
n = n/10;
}

cout << revNum;
    return 0;
}
