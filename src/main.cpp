#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
#include "../include/main.h"

using namespace std;

int main() {
    char str[101];
    cout << "Enter string:" << endl;
    cin.getline(str, 100);

    cout << "String contained " << Count(str) << " groups of equal elements" << endl;

    char* modifiedStr = Change(str);
    cout << "Modified string: " << modifiedStr << endl;

    return 0;
}
