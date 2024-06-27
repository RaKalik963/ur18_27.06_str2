#include <iostream>
using namespace std;


char* mystrcpy(char* str1, const char* str2)
{
	for (size_t i = 0; str2[i] != '\0'; i++)
	{
		str1[i] == str2[i];
		
	}
	return str1;
}

int main()
{
    const char str2[] = "hello world!";
    char str1;
	cout << mystrcpy(str1, str2) << endl;

    system("pause");
    return 0;
}