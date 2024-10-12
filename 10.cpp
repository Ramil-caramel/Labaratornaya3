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
    float length1, a = 0;
    string str1;
    cin >> str1;
    length1 = len(str1);

    for (int i = 0; i < length1; ++i) {
        if (str1[i] == 'a') {
            ++a;
        }
    }
    cout << (a / length1) * 100 << " %" << endl;
}
