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
    int length1,length2,length3;
    string str1, str2, str3;
    cin >> str1 >> str2 >> str3;

    length1 = len(str1);
    length2 = len(str2);
    length3 = len(str3);
    if (length1 >= length2) {
        if (length1 >= length3) {
            if (length2 >= length3) {
                cout << "max " << str1 << " min " << str3;
            }
            else {
                cout << "max " << str1 << " min " << str2;
            }
        }
        else {
            cout << "max " << str3 << " min " << str2;
        }
    }
    else {
        if (length2 >= length3) {
            if (length3 >= length1) {
                cout << "max " << str2 << " min " << str1;
            }
        }
        else {
            cout << "max " << str3 << " min " << str1;
        }
    }

}
