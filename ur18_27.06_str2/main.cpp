#include <iostream>
using namespace std;

char* mystrstr(char* str1, const char* str2) {
    if (*str2 == '\0') {
        return str1;
    }

    for (char* p1 = str1; *p1 != '\0'; ++p1) {
        char* p1_begin = p1;
        const char* p2 = str2;

        while (*p1_begin != '\0' && *p2 != '\0' && *p1_begin == *p2) {
            ++p1_begin;
            ++p2;
        }

        if (*p2 == '\0') {
            return p1;
        }
    }

    return nullptr;
}

int main() {
    char str1[200] = " the function searches for substring str2 in string str1.";
    cout << str1 << endl;

    char str2[100];
    cout << "Enter str2: ";
    cin.getline(str2, 100);

    char* result = mystrstr(str1, str2);
    if (result) {
        cout << "Found: " << endl;
    }
    else {
        cout << "0" << endl;
    }

	system("pause");
	return 0;
}