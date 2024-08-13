#include <iostream>

using namespace std;

int main() {
    // your code goes here
    int mark;
    cin >> mark;

    if (mark > 90) {
        cout << "A";
    }
    else if (mark > 70) {
        cout << "B";
    }
    else if (mark >= 40) {
        cout << "C";
    }
    else {
        cout << "F";
    }
}
