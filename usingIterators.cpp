#include <iostream>
using namespace std;

int main() {
    string text = "Hi";

    for (string::iterator it = text.begin(); it != text.end(); ++it) {
        cout << *it << " ";
    }

    // Output: H i
    return 0;
}
