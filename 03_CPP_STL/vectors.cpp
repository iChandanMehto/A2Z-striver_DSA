#include <bits/stdc++.h>

using namespace std;

void explainVector(){
    // vectore : why  we do use vector ? => when we create a array of size 5  : arr[5] = { _ , _ , _ , _ , _ }, in array we cant modified it . but when we are using vectore its basicaly gives us feature or we call it , we can change and modiefied our array list because of its dynamic nature, vectore is a container which is dynamic in nature , you can always increase size of a vector.

    vector <int> v ;  // this is how we declare vector, and when we declare a vector it creates an empty array.

    v.push_back(1); // when we use vectore's push_back feature it dynamicaly push the number inside the empty array that we created  called "v".

    v.emplace_back(2); // its does the same thing it add number or whatever you written inside the parenthesis , pushes into array at the second postion. 

    vector<pair <int, int>> vec;
    vec.push_back({1,2}); // note : in push_back if we are declearing the pair of vector we have to give curly braces.

    vector <int> v(5, 100);
    // in this syntax , it the first side of number is for 5 containers and second number is  for what is inside that container 5 times.

    vector <int> v(5); // it wil create 5 empty / garbage value of containers.

    vector <int> v1(5, 20); 
    // Now you can see herre is the little bit explained way  => [20, 20, 20 ,20,20].

    // what if you want to copy this vector into another container  ?  ;

    vector <int> v2(v1); // we will simply copy the name and here we copied .similiar but copy of v1 container.
    
    vector <int>::iterator it = v.begin(); // when we use begin() it  prints the memory address not the element !! , 
    it++;
    cout <<*(it) << " ";

    it = it+2;
    cout << *(it)<< " ";

    vector <int> ::iterator it = v.end();  //=> it mean after the and of vectore container number for example  : [10, 20, 30, 40] , so it mean right after 40;


    vector <int> ::iterator it  = v.rend(); 


}


int main() {
    explainVector();
    return 0;
}
