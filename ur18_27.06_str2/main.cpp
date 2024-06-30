#include <iostream>
using namespace std;

char* Uppercase(char* str1) {
    char* p = str1;
    while (*p) {
        if (*p >= 'a' && *p <= 'z') {
            *p -= 32;
        }
        p++;
    }
    return str1;
}

int main()
{
    char str1[] = "Hello World";
    cout << "Uppercase: " << Uppercase(str1) << endl;
	system("pause");
	return 0;
}