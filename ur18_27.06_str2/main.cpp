#include <iostream>
using namespace std;

char* mystrchr(char* str, char s) {
    while (*str != '\0') {
        if (*str == s) {
            return str;
        }
        ++str;
    }
    return nullptr;
}

int main() {
    char str[100];
    cout << "Enter str: ";
    cin.getline(str, 100);

    char s = 's'; 

    char* pos = mystrchr(str, s);
    if (pos) {
        cout << "symbol '" << s << "' is found in str: " << pos << endl;
    }
    else {
        cout << "symbol '" << s << "' is not found in str." << endl;
    }

    system("pause");
    return 0;
}
