#include <iostream>
using namespace std;

int main() {
    string a = "apple";
    string b = "banana";
    string c = "apple";

    cout << (a == b) << endl;  // Output: 0 (false)
    cout << (a == c) << endl;  // Output: 1 (true)
    cout << (a != b) << endl;  // Output: 1 (true)

    return 0;
}
