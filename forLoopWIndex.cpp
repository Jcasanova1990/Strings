#include <iostream>
using namespace std;

int main() {
    string text = "World";

    for (size_t i = 0; i < text.length(); i++) {
        cout << text[i] << " ";
    }

    // Output: W o r l d
    return 0;
}
