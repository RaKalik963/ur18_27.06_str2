#include <iostream>
using namespace std;

char* mystrrev(char* str) {
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }

    int start = 0;
    int end = length - 1;
    while (start < end) {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }

    return str;
}

int main()
{
    char str[] = "Hello World";
    cout << "Reversed string: " << mystrrev(str) << endl;
	system("pause");
	return 0;
}