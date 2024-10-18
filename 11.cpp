#include <iostream>
#include <string>

int literal(char n) 
{
    std::string alphabet;
    int res = 0;
    alphabet = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
    for (int i = 0; i < 52; ++i) 
    {
        if (n == alphabet[i]) {
            res = 1;
        }
    }

    return res;
}

int main()
{
    int a = 44;
    std::string str, newstr;
    str = "Can you can a can as a canner can can a can?";
    std::cin >> newstr;
    for (int i = 0; i < a-3; ++i) 
    {
        if ((str[i] == 'c' or str[i] == 'C') and str[i+1] == 'a' and str[i+2] == 'n' and literal(str[i+3]) != 1)
        {
            std::cout << newstr;
            i += 3;
        }
        
        std::cout << str[i];
    }
}
