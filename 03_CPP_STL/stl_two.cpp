#include <bits/stdc++.h>

using namespace std;

// this are pairs.

void explainPair(){
    pair<int , int> p = {1, 3};
    cout << p.first << " " <<p.second;

    pair<int, pair<int ,int>> p1 = {1, {3, 4}};

    cout << p1.first << " " << p1.second.first << " " << p1.second.second << "\n";  

pair <int, int> arr[] = {{1,3}, {5,6}, {8,9}};
cout << arr[1].second << " " << endl;
} //=> we can also create array of pairs.

int main(){
explainPair();
}