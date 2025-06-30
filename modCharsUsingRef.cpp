#include <iostream>
using namespace std;

int main() {
    string text = "abc";

    for (char &c : text) {
        c = toupper(c);  // Modifies in-place
    }

    cout << text << endl;  // Output: ABC
    return 0;
}
