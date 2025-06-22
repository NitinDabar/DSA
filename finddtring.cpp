#include <iostream>
#include <string>
using namespace std;

int main() {
    string str = "hello world";
    string target = "world";

    size_t pos = str.find(target);

    if (pos != string::npos) {
        cout << "'" << target << "' found at index: " << pos << endl;
    } else {
        cout << "'" << target << "' not found." << endl;
    }

    return 0;
}
