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
    int length1, m, n, a;
    string str1;
    cin >> str1;
    cin >> m >> n;

    length1 = len(str1);
    a = len(str1);
    for (int i = 0; i < a; ++i) {
        if (i >= m - 1 and i <= n - 1 and m-1 >= 0 and n-1<length1) {
            cout << str1[i];
        }
    }
}
