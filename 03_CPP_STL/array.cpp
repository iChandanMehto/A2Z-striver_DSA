#include <bits/stdc++.h>

using namespace std;

int main(){
    double price[] = {12.12, 12.3, 9.9 };
    int size = 5;
    int marks[size] ;

// cout << sizeof(marks) / sizeof(int);
// cout << sizeof(marks);

for(int i =0; i<size; i++){
cin>> marks[i];
}

for(int i = 0; i <size; i++){
cout << marks[i] <<endl;
}

 // generally we do run loop  on array. which will go  : 0 to  size -1

// we have to alwasy acces value of array in limit  if we dont do it .. it will throw garbage value.

int nums[] = {15, 10, -1, -25, 10};

int numSize = 5;
int smallest = INT_MAX;
int largest = INT_MIN;



for(int i = 0; i<numSize; i++){
    // if(nums[i] <smallest ){
    //     smallest  = nums[i];
    // } //=> we can also use min function;
    smallest = min(nums[i], smallest);
    largest = max(nums[i], largest);
}
cout << "smallest ="<< smallest  << endl ;
cout << "largest ="<< largest     << endl ;
    return 0;
}