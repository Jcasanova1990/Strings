#include <iostream>
using namespace std;

int main () {

    string my_string = "dog be jumping over stuff";
    string my_slice = my_string.substr(0, 6);

    cout << my_slice << endl;

    return 0;
}