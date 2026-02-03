#include <iostream>
#include <sstream>
#include <string>
using namespace std;

int main() {
    string s;
    getline(cin,s);

    stringstream ss(s);
    string num;
    while (getline(ss, num, ',')) {  // split by comma
        cout << num << endl;          // print each number on a new line
    }

    return 0;
}
