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
    int i = 0, length1,length2;
    string str1, str2;
    cin >> str1 >> str2;

    length1 = len(str1);
    length2 = len(str2);
    if (length1 > length2) {
        cout << str1;
    }
    else {
        cout << str2;
    }

}
