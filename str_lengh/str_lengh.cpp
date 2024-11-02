#include <iostream>
#include <locale>  // для установки локали

using namespace std;

// Функция для вычисления размера строки в байтах (включая '\0')
int stringSize(const char* str) {
    int size = 0;
    while (str[size] != '\0') {
        size++;
    }
    // Увеличиваем размер на 1 для учета завершающего нулевого символа
    return size + 1;
}

int main() {
    setlocale(LC_ALL, "Russian");

    cout << "Введите строку: ";
    char inputStr[256];
    cin.getline(inputStr, 256);

    // Вызов функции для вычисления размера строки
    int size = stringSize(inputStr);
    cout << "Размер строки (с учетом завершающего символа '\\0'): " << size << " байт" << endl;

    return 0;
}
