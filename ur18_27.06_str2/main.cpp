#include <iostream>
using namespace std;


char* mystrcpy(char* str1, const char* str2) {
    int i = 0;
    while (str2[i] != '\0') {
        str1[i] = str2[i];
        ++i;
    }
    str1[i] = '\0';
    return str1;
}

int main()
{
    char str1[100];
    char str2[] = "Hello world";
	
    mystrcpy(str1, str2);
    cout << str1 << endl;
    system("pause");
    return 0;
}