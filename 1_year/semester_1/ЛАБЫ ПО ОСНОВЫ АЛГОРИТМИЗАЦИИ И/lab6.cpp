#include <iostream>
#include <string.h>
using namespace std;

int main() {
    char str[100];
    bool hasK = false, hasO = false, hasD = false;

    cout << "Введите строку: ";
    cin >> str;

    int n = strlen(str);
    for (int i = 0; i < n; i++) {
        if (str[i] == 'k') hasK = true;
        if (str[i] == 'o') hasO = true;
        if (str[i] == 'd') hasD = true;
    }

    if (hasK && hasO && hasD) {
        cout << "\n\tВсе символы найдены (k, o, d)";
    } else {
        cout << "\n\tНе все символы найдены";
    }

    return 0;
}
