#include <bits/stdc++.h>
using namespace std;

int main() {
    int nums[] = {1, 2, 3, 4, 90};

    for (int i = 0; i <= 4; i++) {
        cout << nums[i] << "\n";
    }

    string place[] = {"kanyaKumari", "france", "japan", "poland"};
    for (int i = 0; i <= 3; i++) {
        cout << place[i] << endl;
    }

    // Fix: Declare with correct size (5 values)
    string cities[5] = {"Delhi", "Benglore", "Jaipur", "Mumbai", "Patna"};

    for(int i = 0; i<= 5; i++){
        cout << cities[i]<< "  " ;
    }

    // Sum of Array Elements

    int sumArr[] = {10, 20, 30, 40, 50};
    for(int i = 0; i<= 5; i++){
cout <<   sumArr+=sumArr[i];
    }


//     Common Mistakes
// Don't access index out of bounds (like numbers[10] if size is 5)

// Array size must be known at compile time (unless you're using std::vector)

    return 0;
}
