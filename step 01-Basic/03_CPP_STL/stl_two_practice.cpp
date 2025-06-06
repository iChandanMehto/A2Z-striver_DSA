#include <bits/stdc++.h>

using namespace std;

int main(){
pair<int , int>pairOne = {15, 9};
cout << pairOne.first << " "<< pairOne.second<< endl;

pair <int , string>bio = {19, "Chandan"};
cout << "Age: " <<bio.first << " " << "Name: "<<  bio.second<< endl;

//=> shortcut of making pairs
auto student = make_pair(20, "Chandan");
cout << "age: " <<student.first<< " Name: " << student.second<<endl;


pair<int , pair<int, int>> pairTwo  = {20,{21, 22}};

cout << pairTwo.first<<"\n"<< pairTwo.second.second << "\n" << pairTwo.second.first<< endl;

pair <int , int > pairArr[] = {{19, 20}, {25,50}, {60, 120}};

cout << pairArr[0].first << endl; //=> note : always you should know !! it will start counting array of pairs from 0.

pair<string, string>  pairOfStr[] = {{"Chhole Bhature", "Nimbu Pani"}, {"Chai Biskut", "Rayta"},{"coke", "Burger"} };

cout << pairOfStr[0].first << "\n"<< pairOfStr[1].first << endl;

pair<string , string> cars[]  = {{"Porsche"}, {"Ferrari"}, {"BMW"}, {"Bentley"}, {"NissanGTR"}};

cout << cars->first<< endl;

    return 0;
}

