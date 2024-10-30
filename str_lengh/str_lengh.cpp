#include <iostream>
#include <cstring> // для функции strlen
#include <locale>  // для установки локали

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");

    cout << "Введите строку: ";
    char inputStr[256];
    cin.getline(inputStr, 256);

    // Вариант 1: Использование встроенной функции strlen
    int length_builtin = strlen(inputStr);
    cout << "Вариант 1: Использование встроенной функции strlen" << endl;
    cout << "Длина строки: " << length_builtin << endl;
    cout << "-----------" << endl;

    // Вариант 2: Ручной посимвольный перебор
    int length_manual = 0;
    while (inputStr[length_manual] != '\0') {
        length_manual++;
    }

    cout << "Вариант 2: Ручной посимвольный перебор" << endl;
    cout << "Длина строки: " << length_manual << endl;

    return 0;
}
