#include <iostream>
using namespace std;

int mystrcmp(const char* str1, const char* str2) {
    while (*str1 && (*str1 == *str2)) {
        str1++;
        str2++;
    }
    if (*str1 > *str2) {
        return 1;
    }
    else if (*str1 < *str2) {
        return -1;
    }
    else {
        return 0;
    }
}


int main()
{
    char str1[200] = "the function searches for substring str2 in string str1.";
    cout << "Original string: " << str1 << endl;

    char str2[200];
    cout << "Enter str2: ";
    cin.getline(str2, 100);

    int cmp_result = mystrcmp(str1, str2);
    cout << "Comparison result: " << cmp_result << endl;
	system("pause");
	return 0;
}