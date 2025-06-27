#include <bits/stdc++.h>

using namespace std;


//first method : not much better 

void findGCD(){
    int gcd = 1;
    int n1 , n2;
    cout << "Enter Two Number";
    cin >> n1 >>  n2;

for(int i  = 1; i<=n1; i++){
    if(n1 % i == 0 && n2%i ==0){
        gcd = i;
    }
}
cout << "gcd is : " << gcd<< endl;
}

// second improved vers;


void intGCD(){
    int gcd = 1;
    int N1, N2;
    cout << "Enter Two Number";
    cin >> N1 >> N2;
    for(int i = min(N1, N2); i>=1; i--){
        if(N1%i == 0 && N2%i ==0){
            gcd = i;
            break;
        }
    }
}


int intGCDOne(int a , int b){
        while(a>0 && b>0){
            if(a>b) a%b;
            else b = b%a;
        }
        if(a==0) return b;
        return a;
}

int main(){
   int a = 36, b = 60;
  int basicMaths = intGCDOne(a, b);
cout << basicMaths<< endl;

    return 0;
}