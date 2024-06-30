#include <iostream>
using namespace std;

char* Lowercase(char* str1) {
    char* p = str1;
    while (*p) {
        if (*p >= 'A' && *p <= 'Z') {
            *p += 32;
        }
        p++;
    }
    return str1;
}

int main()
{
	char str1[] = "HELLO WORLD";
	cout << "Lowercase: " << Lowercase(str1) << endl;
	system("pause");
	return 0;
}