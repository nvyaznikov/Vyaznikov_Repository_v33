#include <iostream>

using namespace std;

// Функции для выполнения операций
void multiply(double A, double B);
void divide(double A, double B);

int main() {
    double A, B;
    int choice;

    // Вывод меню
    cout << "Введите A: ";
    cin >> A;
    cout << "Введите B: ";
    cin >> B;

    cout << "\nВыберите операцию:\n";
    cout << "1. Умножение (*)\n";
    cout << "2. Деление (/)\n";
    cout << "Ваш выбор: ";
    cin >> choice;

    // Выбор действия на основе указанного пользователем пункта меню
    switch (choice) {
    case 1:
        multiply(A, B);
        break;
    case 2:
        divide(A, B);
        break;
    default:
        cout << "Неверный выбор!" << endl;
        break;
    }

    return 0;
}

// Пустая функция для умножения
void multiply(double A, double B) {
     double result = A * B;
     cout << "Результат умножения: " << result << endl;
   
}

// Пустая функция для деления
void divide(double A, double B) {
    if (B != 0) {
        double result = A / B;
        cout << "Результат деления: " << result << endl;
    }
    else {
        cout << "Ошибка: деление на ноль!" << endl;
    }
}

void inputValues(double& A, double& B) {
    cout << "Введите A: ";
    cin >> A;
    cout << "Введите B: ";
    cin >> B;
}