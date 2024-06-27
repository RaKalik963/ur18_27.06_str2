#include <iostream>
using namespace std;


int mystrlen(const char* str1) 
{
    int len = 0;
    while (str1[len] != '\0') {
        len++;
    }
    return len;
}

int main()
{
    char str1[] = "hello world!";
    cout << "amount of symbols in str = " << mystrlen(str1) << endl;
    system("pause");
    return 0;
}