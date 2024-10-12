#include <iostream>
#include <string>
using namespace std;

int main(){
    int i = 0, len = 0;
    string str;
    cin >> str;

    while (str[i] != '\0') {
        len += 1;
        i += 1;
    }
    if (len % 2 == 0) {
        cout << "even" << endl;
    }
    else {
        cout << "odd" << endl;
    }
}
