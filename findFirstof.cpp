#include <iostream> 
using namespace std;

int main () {

    string string1 = "wow look at all those chickens!";
    string string2 = "look";

    cout << string1.find_first_of(string2) << endl;

    return 0;
}