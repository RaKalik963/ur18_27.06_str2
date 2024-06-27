#include <iostream>
using namespace std;

char* mystrcat(char* str1, const char* str2)
{
	for (size_t i = 0; str1[i] != '\0'; i++)
	{
		str1[i] == str2[i];
		cout << str1 << endl;
	}
	return str1;
}


int main()
{
	char str[] = "hello";
	const char str2[] = " world";
	mystrcat(str1, str2);
	system("pause");
	return 0;
}