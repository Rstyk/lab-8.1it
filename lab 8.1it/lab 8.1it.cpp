#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>

using namespace std;

int Count(char* str)
{
    if (strlen(str) < 4)
        return 0;
    int k = 0;
    for (int i = 0; str[i + 3] != 0; i++)
        if (str[i] == str[i + 1] && str[i + 1] == str[i + 2] && str[i + 2] == str[i + 3])
            k++;
    return k;
}

char* Change(char* str)
{
    size_t len = strlen(str);
    if (len < 4)
        return str;
    char* tmp = new char[len * 4 / 3 - 2];
    char* t = tmp;
    t[0] = '\0';
    size_t i = 0;
    while (i < len && str[i + 2] != 0) {
        if (str[i] == str[i + 1] && str[i + 1] == str[i + 2] && str[i + 2] == str[i + 3])
        {
            strcat(t, "**");
            t += 2;
            i += 4;
        }
        else
        {
            *t++ = str[i++];
            *t = '\0';
        }
    }
    strcat(t, &str[i]);
    return tmp;
}

int main()
{
    char str[101];
    cout << "Enter string:" << endl;
    cin.getline(str, 100);

    cout << "String contained " << Count(str) << " groups of 4 elements" << endl;
    char* dest = Change(str);

    cout << "Modified string (param): " << str << endl;
    cout << "Modified string (result): " << dest << endl;

    return 0;
}
