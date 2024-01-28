#include <iostream>
#include <cstring>

using namespace std;

int main() {
    char str1[20];
    int i, length;
    int flag = 0;

    cout << "*******************" << "\n PALINDROME" << "\n*******************\n";

    cout << "Enter a word: "; cin >> str1;
    length = strlen(str1);

    for (i = 0; i < length; i++) {
        if (str1[i] != str1[length - i - 1]) {
            flag = 1;
            break;
        }
    }

    if (flag) {
        cout << str1 << " is not a palindrome" << endl;
    }
    else {
        cout << str1 << " is a palindrome" << endl;
    }

    return 0;

}