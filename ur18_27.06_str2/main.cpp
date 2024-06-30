#include <iostream>
using namespace std;

char* mystrcat(char* str1, const char* str2) {
    int i = 0;
    int j = 0;

    while (str1[i] != '\0') {
        ++i;
    }

    while (str2[j] != '\0') {
        str1[i] = str2[j];
        ++i;
        ++j;
    }
    str1[i] = '\0';
    return str1;
}


int main()
{
	char str1[100] = "hello";
	char str2[] = " world";
	mystrcat(str1, str2);
    cout << str1 << endl;
	system("pause");
	return 0;
}