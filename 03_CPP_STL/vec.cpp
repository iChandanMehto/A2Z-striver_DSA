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

    //  vector <int>::iterator it = v.rend(); 
     
    //  vector <int>::iterator it = v.rbegin(); 

for(vector<int>::iterator it = v.begin(); it != v.end(); it++){
    cout <<*(it)<< " ";
}

for(auto it  = v.begin(); it != v.end(); it++){
    cout << *(it)<<" ";  //=> auto means iterator in data types.
}

for(auto  it : v){
    cout << it << " ";
}

// {10, 20, 12, 23}
v.erase(v.begin()+1);

//{10, 20, 12, 35}

v.erase(v.begin()+2, v.begin()+4); //  {10, 20 , 35} [start, end]


//Insert Function 

vector<int> v(2, 100); //=> it mean it will going to create two 100 number of containers : {100, 100}.

v.insert(v.begin(), 300);  //=> it will create container like this  : {300, 100, 100} becuase we have already created  and pushed 2 space number of 100.

v.insert(v.begin()+1, 2, 10); //=> it mean we are storing number right after 300 and 2 mean 2 spacing number container of 10. and it look like this  : {300, 10, 10, 100, 100}.

vector<int> copy(2, 50); //=> this is doing the same thing creaating 2 container of 50 in array like syntax.

v.insert(v.begin(), copy.begin(), copy.end()); //=> in this case we are pushing/ adding 2 copy named container insder the v function and we pushing this into starting thats why we have used v.begin() function. and it will look like this  : {50, 50, 300, 10, 10, 100, 100}.

cout <<v.size(); //=> it will show you how many elements are inside the vector. expamle  : {10, 10}.

v.pop_back(); //=> it wil remove last element of vector, example : before=> {10,20}, after => {10}.

v1.swap(v2);  //=> it will swap vector 
//=> v1 -> {10, 20}
//=> v2 -> {30, 40}
//  after swapping=>    v1 -> {30, 40}  v2 -> {10, 20}

v.clear(); //=> erases entire vector.

cout<< v.empty(); //=> it will give answer in boolean value thats means it gonna tell you is you vectore empty or not.
}



void explainList(){
    //=> LIst  : is exactly siimiliar to vector but it gives you front operations as well, and its a container and dynamic in nature.

    list<int> ls;
    ls.push_back(2);  //=> {2}
    ls.emplace_back(4); //=> {2, 4}

    ls.push_front(5);
     //=> {5, 2, 4}   : time complexity wise its very cheap compare to a vector 

    ls.emplace_front(2, 4);  

    //rest functions same as vector
    //=> begin , rbegin, rend, clear, insert , size, swap

}



void explainDeque(){
    deque<int>dq;
    dq.push_back(1); //{1}
    dq.emplace_back(2); //{1, 2}
    dq.push_front(4); //{4, 1, 2}
    dq.emplace_front(3); //{3, 4, 1, 2}

    dq.pop_back(); //{3, 4, 1}
    dq.pop_front(); //{4, 1}

    dq.back();
    dq.front();

    // rest function same as vector
    //begin , end , rbegin , rend, clear, insert , size, swap
}

void explainStack(){
//LIFO : Last In Front Out

    stack<int>st;
    st.push(1); //{1}
    st.push(2); //{2,1}
    st.push(3); //{3, 2,1}
    st.push(3); // {3,3,2,1}
    st.emplace(5); //{5,3,3, 2,1}

    cout<< st.top(); // prints 5 "** st[2]  is invalid "

    st.pop(); //=> st looks like {3,3, 2, 1}

    cout << st.top();  //=> it will gonna print 3 because of 3 is on top in the stack. 

    cout << st.size(); //=> it will going to print how much element inside the stack.

    cout << st.empty(); //=> the answer will boolean value. so answer will be false because stack is nt empty.

stack <int> st1, st2;
st1.swap(st2);
//=> its going to swap element st1 element will going to inside the st2 and st2 will in st1.
}


void explainQueue(){
        //=> Queue is like siliar to stack but its 
    //=> FIFO : First In First Out,
    queue<int> q;
    q.push(1);  // {1}
    q.push(2); //{1, 2}
    q.emplace(4); //{1, 2, 4}

    q.back() += 5;  // it will print 9 becuse it will go to  back of queue and add 5 into that number.

    cout<< q.back();   //prints 9,  becuase  4+ 5 = 9 

    //=> Q is {1, 2, 9}
    cout << q.front(); //=> it will print 9

    q.pop(); //{2, 9} will be answer.

    cout << q.front();  //prints 2

    // size swap empty same as stack
}

void explainPQ(){
    //=> it will gives priority to the largest value elements.
    priority_queue<int>pq;
    pq.push(5);   //{5}
    pq.push(2);   //{5, 2}
    pq.push(8);   //{8, 5, 2}
    pq.emplace(10); //{10, 8, 5, 2} 
    
    cout <<pq.top();  //Prints 10 because its largest element.

    //=> size swap  empty function same as others

    //=> minimum heap
    priority_queue<int, vector <int>, greater<int>> pq;
    pq.push(5); //{5}
    pq.push(2); //{2, 5}
    pq.push(8); //{2, 5, 8 }
    pq.emplace(10); //{2, 5, 8, 10}
    cout <<pq.top(); //=> it will print 2

    //=> what is the time complexity of  push? : push happens in log n
    //=> top happens of big O(1)
    //=> : push happens in log n
}

void explainSet(){
    //=> set: In Set everything is shorted and unique.

    set<int> st;
    st.insert(1);  //{1}
    st.emplace(2);  //{1, 2}
    st.insert(2);  //{1, 2}
    st.insert(4);  //{1, 2, 4}
    st.insert(3);  //{1, 2, 3, 4}
    
    //Functionality of insert in vector can be used also , that only increases efficiency .


    //begin(), end(), rbegin(), rend(),  size(), empty() and swap are same as those of above


    //{1, 2, 3, 4, 5}
    //=> iterator : which point to the memory.
    auto it = st.find(3);

        //{1, 2, 3, 4, 5}
        auto it = st.find(6); //=> it will return st.end() because 6 isnt inside the set.

        //{1,4,5}
        st.erase(5); //=> it will delete 5 and maintain shorted order. // takes logarithmic time

        int cnt = st.count(1); //=> if it exist it will return 1 otherwise 0 because set contains unique value.

        auto it = st.find(3);
        st.erase(it); //=> it will will delete iterator, & it takes constant time.


        //=> {1, 2, 3, 4, 5}
        auto it1  = st.find(2);
        auto it2  = st.find(4); 
        st.erase(it1, it2);  //=> after erase: {1, 4, 5}
        //[first, last], basically  it start erasing from 2 but it will end erasing right before 4.

        //=> lower_bound() and upper_bound()  functions works in the same way as in vector  it does.

        //This is the syntax=>
        auto  it = st.lower_bound(2);
        auto it = st.upper_bound(3);
 
}

int main(){
    return 0;
}