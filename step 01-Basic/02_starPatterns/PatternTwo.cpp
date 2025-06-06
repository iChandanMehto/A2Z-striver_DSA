#include <bits/stdc++.h>

using namespace std;

// Outer loop will show in which line you are .
// inner loop will show  you in that line what work should be done.


int main(){
int n = 4;
for(int i = 1; i <=n; i++){ //outer loop
for(int j = 1; j <= n; j++){
    cout << j;
}
cout << endl;
}
return 0;
}