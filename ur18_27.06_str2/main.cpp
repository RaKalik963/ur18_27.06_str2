#include <iostream>
using namespace std;


char* NumberToString(int num) {
    char* buffer = new char[12];

    bool isNegative = false;
    int i = 0;

    if (num == 0) {
        buffer[i++] = '0';
        buffer[i] = '\0';
        return buffer;
    }

    if (num < 0) {
        isNegative = true;
        num = -num;
    }

    while (num > 0) {
        buffer[i++] = (num % 10) + '0';
        num /= 10;
    }

    if (isNegative) {
        buffer[i++] = '-';
    }

    buffer[i] = '\0';  

    int start = 0;
    int end = i - 1;
    while (start < end) {
        char temp = buffer[start];
        buffer[start] = buffer[end];
        buffer[end] = temp;
        start++;
        end--;
    }

    return buffer;
}

int main() {
    int num;
    cout << "Enter num: ";
    cin >> num;

    char* num_to_str = NumberToString(num);
    if (num_to_str != nullptr) {
        cout << "Number to string: " << num_to_str << endl;
        delete[] num_to_str; 
    }
    else {
        cout << "Memory allocation failed." << endl;
    }

	system("pause");
	return 0;
}