#include <bits/stdc++.h>

using namespace std;



int main(){
    string carArr[4] = {"volvo", "jaguar", "porsche", "gt4"};

    string myCar[] = {"volvo", "bmw", "ford"};

    for(int i = 0; i <4; i++){
cout << i <<"="<< carArr[i]<<"\n";
    }

    for(int i = 0; i <3;i++){
cout<< myCar[i]<<"\n"; 
    }

    string tea[3] = {"chaiPatti", "lalChai", "greenTea"};
    cout<< sizeof(tea)/sizeof(tea[3])<< "\n";



    return 0;
}
