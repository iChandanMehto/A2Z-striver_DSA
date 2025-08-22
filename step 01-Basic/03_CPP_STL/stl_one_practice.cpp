#include <bits/stdc++.h>

using namespace std;

int myMarks(int a  , int b){
    return a+ b;
}

// Create a vector of integers, insert 5 elements, and print them using a loop.
void insertVec() {
    vector<int> listVec = {1, 4, 5, 6, 9, 8};

    for (vector<int>::iterator it = listVec.begin(); it != listVec.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;
}


// Given a vector of integers, find the maximum and minimum element using STL functions.
void maxMin() {
    vector<int> listVec = {1, 4, 5, 6, 9, 8};

int minNum = *min_element(listVec.begin(), listVec.end());

int maxNum = *max_element(listVec.begin(), listVec.end());

cout << "min data's : " << minNum << endl;
cout << "max data's : " << maxNum<< endl;

}

// Sort a vector in ascending and descending order using sort().
void sortVector(){
    
}



int main(){
    // myMarks();
 maxMin();
     return 0;
}