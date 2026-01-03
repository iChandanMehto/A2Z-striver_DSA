#include <bits/stdc++.h>

using namespace std;

void print(){
    cout << "chandan";
} //=> void is a type of of function which is not return anything.

int sum(int a , int b){
    return a, b;
}



//Pairs

void explainPair(){
    pair<int , int > p = {2, 4};  //  this is how we store pair of int either you can say we re storing two int into pair and named it "P", and data type can be anything like bool, string etc.

    // Now this is how we can get access of its value:
    cout << p.first << " "<< p.second;


    //  this is how we can create and store multiple / more than 2 pairs : 
    
    pair<int , pair <int , int >> pairTwo = {1, {2, 5}};
    //and now we can access this using very simple way:
     cout << pairTwo.first<<" "<< pairTwo.second.second;


     // we can also treate pair as any data type and here is another example we creating array of pair : 

     pair < int , int > arr[] = {{2, 4}, {5, 9}, {11, 13}};
    cout << arr[1].second;
}

void explainVector(){
    vector<int > v; // this is how you can declare vectore and its data type can be anything like bool , string int, long anything. you want. and then after you can put data type name.

    //=> vector is container which is dynamic in nature, we can use vector to use pair more effectivly.


    v.push_back(1); //=> its add 1 into v
    v.emplace_back(2); //=> its dynamically increase the size of vector and inserts 2 at the  back.

    //=> can we declare pairs in vectore? : yesss we can this is how we can declare.

    vector<pair<int , int >> vec;
    vec.push_back({1, 2});
     //=> if we wanted to add pairs into vector using pushback method we need to do add curly braces.
     vec.emplace_back(3, 6); //=> but in emplace_back you can direcet insert yout data type value and it will directly create pairs by assuming that its a pair and create your pairs of data by set which also declared by you.

     //=> now you can also create alot of element already filled you need to just create : 
     vector<int > v(5, 100); //=> it creating container  which is containg  5 insetence of 100. visual way: {100, 100, 100, 100, 100, 100}.

//=> now what if you dont wanna create particular value of container ? you create it empty container also behind the seen it will going to create empty container of number.
vector <int > v(6);  //=> a container of size 6 with 6 instences  of 0 or any garbage value created by you machine is going to be  done here.


vector <int > vecOne(5, 25); 
//=> you can always increase the size of the vector even if you re pre defining the size of the vector for eg : using vector.emplace_back() method.

vector<int > vecTwo(vecOne) ;   //=> this is how we can copy entire vector in another vec.

//=> there re two simple way to access element inside the vector.

cout << vec[0]<< vec.at[2]<< endl;
 //=> usually we use first method becuase its easier to access than second.


 vector<int > :: iterator it  = v.begin();
 //begin() mean its directly talking to memory where element is stored.

 it++;
 cout  << *(it)<< " ";
 //=>  after using * we can access element which located in memory.

 vector<int > ::iterator it  = v.end(); //=> it means it will going to end right after your actual element.


  vector<int > ::iterator it  = v.rend();  // it will  reverse the whole vector and show you after element.
   vector<int > ::iterator it  = v.rbegin(); 

   cout <<  v.back(); //=> it will show you last element of you vector. for eg : {10, 30, 40} => it mean 40.

   //=> this is how we can iterate of vector elements.

   for(vector<int > ::iterator it  = v.begin(); it != v.end(); it++){
    cout << *(it) << " ";

   }  //=> this is how you can print entire vector.

   //=> now we re going to write it in second and easy way .

   for(auto it  = v.begin(); it !=v.end(); it++){
    cout << *(it)  << " ";
    //=> here auto mean auto assign your data type wether it  any data type. it will detect automatically.
   };

   //=> using for each  method.

   for(auto it :v){
    cout << it << " ";
   };


//    {10, 20, 12, 23}
   v.erase(v.begin()+1);  //=> here we re deleting an element in this we re using +1 so it will start from 10 and right after 20 where its located will going to delete.


   //{30, 20, 14, 90, 23, 67}

   v.erase(v.begin()+2, v.begin()+4);

   //Insert Function
   
   vector<int> v(2, 100); //=> {100, 100}
   v.insert(v.begin(), 300); //=> its adding 300 in the begining mean starting. :  {300, 100, 100}

   v.insert(v.begin() + 1, 2, 25); //=> In this is insert function first begin function is taking/grabing postion right after 300 which is 2nd postion. and then 2 mean it going to create 2 place for 25 num element.

   // now how to copy entire vector  : 
   vector<int> copy(2,  50); //=> {50, 50}

   v.insert(v.begin(), copy.begin(), copy.end()); // now it  add these two 50 num elements  at the intial postion inside the vector : {50 , 50 ,300, 100, 100}


   //{20, 45}
   v.size(); //=> size of your vector. // 2 

   v.pop_back(); //=> will pop's out  your last element of vector. 20
 
   //v1 = {20, 80}
   //v2 = {50, 40}

   v1.swap(v2); //=>      //v2 = {20, 80}
                                    //v1 = {50, 40}

v.clear(); //=> eresase entire vector.

 cout << v.empty(); //=> it will respond you in true and false basically tells you does your vector is empty or not.

}


int main(){
    // int s = sum(1, 5); //=> basically 1 is taking place of int a and same as 5 is taking place of  b.

    explainPair();

    return 0;
}