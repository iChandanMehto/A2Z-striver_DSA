#include <bits/stdc++.h>

//Functions are set of code which performs something for you 
//Functions are used to modularise code 
//Functions are used to increase readibilit
//Functions are used to use code multiple times
//void => which doesnot  return anything.

//return
//parameterised
//non paramaterisedB


using namespace std;

int maxx(int num1, int num2){
if(num1 >= num2){
return num1;
}else{
    return num2;

}
}

int main(){
int num1, num2;
cin >> num1 >> num2;
int minimum = maxx(num1, num2);
cout << minimum<<endl;

return 0;

}



