#include <iostream>
using namespace std;


char* mystrcpy(char* str1, const char* str2) 
{
    char* res = str1;

    while ((*str1++ = *str2++) != '\0');
    cout << str1 << endl;
    return res;
}

int main()
{
    const char str2[] = "hello world!";
    char str1;
	
    cout << " " << mystrcpy(str1, str2) << endl;
    system("pause");
    return 0;
}