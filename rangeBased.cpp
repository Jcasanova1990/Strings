#include <iostream>
using namespace std;

int main() {
    string text = "Hello";

    for (char c : text) {
        cout << c << " ";
    }

    // Output: H e l l o
    return 0;
}