#include <bits/stdc++.h>
using namespace std;

int digitCount(int n) {
    int cnt  = 0;
    while(n > 0) {
        cnt = cnt + 1;
        n = n / 10;
    }
    return cnt;
}

int main() {
    int n;
    cin >> n;  // Take input
    cout << "Number of digits: " << digitCount(n) << endl;
    return 0;
}
