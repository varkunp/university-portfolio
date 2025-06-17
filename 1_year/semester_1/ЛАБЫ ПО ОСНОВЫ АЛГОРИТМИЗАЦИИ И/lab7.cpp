#include <iostream>
using namespace std;

// Функция вычисляет объемы и возвращает общую сумму
int calculateTotalVolume(int count) {
    int total = 0;

    for (int i = 0; i < count; i++) {
        int x, y, z;
        cout << "\nВвод №" << i + 1 << endl;
        cout << "Введите X: "; cin >> x;
        cout << "Введите Y: "; cin >> y;
        cout << "Введите Z: "; cin >> z;

        int volume = x * y * z;
        cout << "Объем: " << volume << endl;

        total += volume;
    }

    return total;
}

int main() {
    int numberOfInputs;

    cout << "Сколько объемов нужно ввести? ";
    cin >> numberOfInputs;

    int totalVolume = calculateTotalVolume(numberOfInputs);

    cout << "\nОбщий объем: " << totalVolume << endl;

    return 0;
}
