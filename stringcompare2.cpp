#include <iostream>
using namespace std;

int main() {
    string a = "apple";
    string b = "banana";
    string c = "apple";

    cout << a.compare(b) << endl;  // Output: < 0 (apple < banana)
    cout << a.compare(c) << endl;  // Output: 0   (equal)
    cout << b.compare(a) << endl;  // Output: > 0 (banana > apple)

    return 0;
}
