#include <bits/stdc++.h>

using namespace std;



/*
 Object and classes : 
 - objects are entites in real world.
 - classes  is like blue print of these entities.

*/

class teacher{
  // we call it properties/ attributes
    string name;
    string department;
    string subject;
    double salary;

    // methods / we can also call it memeber function .

    void changeDept(){
        department = newDeparment;

    }

};

int main(){
    teacher teacherOne;
    teacherOne.name = "Bhavya";
    teacherOne.department = "Science";
   teacherOne.subject = "C++";
   teacherOne.salary = 25000;
   

    return 0;
}