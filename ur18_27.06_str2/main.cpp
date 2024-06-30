#include <iostream>
using namespace std;


int StringToNumber(char* str) {
    int number = 0;
    bool isNegative = false;

    if (*str == '-') {
        isNegative = true;
        str++;
    }

    while (*str) {
        number = number * 10 + (*str - '0');
        str++;
    }

    return isNegative ? -number : number;
}

int main()
{
    char str[100];
    cout << "Enter str2: ";
    cin.getline(str, 100);

    int num = StringToNumber(str);
    cout << "String to number: " << num << endl;

	system("pause");
	return 0;
}