#include <bits/stdc++.h>

using namespace std;

void explainVectore(){
    vector <int> v; // it will create an empty container for store data
    v.push_back(1); // and it will gonna add 1 to that container.
    v.emplace_back(2);  // and when we use it , it will gona add this number after 1.. because we used first push back and ... emplace back will create a container after that number and store its self.

    vector <pair<int , int>> vec; // we create a pair of vectore.
     // and if we want to use this so..

     vec.push_back({1, 3}); // first we have to use a curly braces inside the bracket becuase how it works..

     vec.emplace_back(2, 4) ; // if we use emplace back feature then we dont need any type of curly braces because its automaticly gonna store all of this inside pair by assuming itself.


     vector <int> v(5, 100);
     vector <int> v(5);
     vector <int> v1(5, 20);

     vector <int> v2(v2);


     vector <int>::iterator it = v.begin();
//=> iterator is nothing but points to the memory where elements are lying.

     it++;
     cout <<*(it)<<" ";

     it = it+2;
     cout <<*(it)<<" ";
     vector <int>::iterator it = v.end();  // => it mean it will going to end of element.

     vector <int>::iterator it = v.rend(); 
     
     vector <int>::iterator it = v.rbegin(); 



}

int main(){
    return 0;
}