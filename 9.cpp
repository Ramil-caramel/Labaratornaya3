#include <iostream>
#include <string>
using namespace std;

int len(string str) {

    int i = 0, l = 0;

    while (str[i] != '\0') {
        l += 1;
        i += 1;
    }
    return l;
}

int main(){
    int length1, a;
    string str1, str_zv{"*"};
    cin >> str1;
    length1 = len(str1);
    for (int i = 0; i < length1 - 1; ++i) {
        str_zv += "*";
    }
    cout << str_zv << str1 << str_zv;
}
