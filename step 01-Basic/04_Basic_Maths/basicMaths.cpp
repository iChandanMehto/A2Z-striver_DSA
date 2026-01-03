#include <bits/stdc++.h>
using namespace std;

int digitCount(int n) {
    int cnt  = 0;
    while(n > 0) {
        cnt = cnt + 1;
        n = n / 10;
    }
    return cnt;
} 

//1.  Power of Three
// Given an integer n, return true if it is a power of three, otherwise false.
// (Example: 27 → true, 10 → false)

bool isPowerOfThree(int n){
    if (n <= 0) return false;  // powers of 3 are always positive
    while (n % 3 == 0) {
        n /= 3;
    }
    return n == 1;  // if we end up at 1 → power of 3
}


// 2.Sum of Two Numbers
// Take two integers as input and print their sum.

int sumFunction(int inputOne, int inputTwo){
return inputOne+inputTwo;
}


// 3.Even or Odd
// Check if a given number is even or odd.

string checkPoint(int  inputPoint){
    if(inputPoint%2==0){
        return "Yes it's even number Tanjiro"; 
    }else{
    return "You got cought it's odd number Zenitsu" ;
    }
}

//4.  Largest of Two Numbers
// Take two integers and print which one is larger.

int  largestNumPoint(int doorOne , int doorTwo){

}


// 5. Simple Calculator
// Take two numbers and an operator (+,-,*,/) as input and perform the operation.

int calculator(int numOne, int numTwo){

}

// 6. Multiplication Table
// Print the multiplication table of a given number.

int multiplication(int numOne){
    cin >> numOne;
       
}

int main() {
int numOne;
 cin >>numOne;
cout << multiplication(numOne);
    return 0;
}
