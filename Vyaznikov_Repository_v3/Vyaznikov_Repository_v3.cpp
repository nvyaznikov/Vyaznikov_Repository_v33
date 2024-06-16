﻿#include <iostream>

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
    // Реализация будет добавлена позжеe
}

// Пустая функция для деления
void divide(double A, double B) {
    // Реализация будет добавлена позже
}
