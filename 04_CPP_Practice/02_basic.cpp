#include <bits/stdc++.h>
using namespace std;

int firstFun(){
    string name;
    cout << "What's Your Name? " << endl;
    cin >> name;

    cout << "Your Name is: " << name << endl;
    return 0;
}

int secFun(){
    int age;
    cout << "Whats Your age" << endl;
    cin >> age;
    cout <<"Hey  My Age is : "<< age<< endl;
}

int thirdFun(){
    bool amIboy = true;
    bool myAge = false;
    cout << amIboy << endl;
    cout<< myAge<< endl;

    return 0;
}

int fourthFun(){
    int a = 30;
    int b = 50;
    if(a>b){
        cout <<"a is smaller then b";
    }else{
        cout <<"a is not smaller then b";
    }
    return 0;
}

int fifthFun(){
    int yourAge;
       cin >> yourAge;
  if(yourAge >= 18){
      cout<< "Hey ! You re adult!!";
  } else if(yourAge <18){
      cout<< "Hey ! You re just a kidd ";
  }
  return 0;
}

//  1. Check if a number is even or odd.

int sixthFun(){
int givenNum;
cin >> givenNum;
if(givenNum%2 == 0){
cout << "Its an even number";
} else {
    cout<< "Its odd number";
}
return 0;
}

int main(){
    return 0;
}





