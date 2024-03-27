#include <bits/stdc++.h>
using namespace std;

// Функция для сложения
double add(double a, double b) {
    return a + b;
}

// Функция для вычитания
double subtract(double a, double b) {
    return a - b;
}

// Функция для умножения
double multiply(double a, double b) {
    return a * b;
}

// Функция для деления
double divide(double a, double b) {
    if (b != 0) {
        return a / b;
    } else {
        cout << "Error: Dividing by zero!" << endl;
        return 0;
    }
}

// Функция для возведения в степень
double power(double base, double exponent) {
    return pow(base, exponent);
}

// Функция для извлечения квадратного корня
double mySqrt(double num) {
    return sqrt(num);
}

// Функция для нахождения модуля числа
double myAbs(double num) {
    return abs(num);
}

// Функция для округления числа
double myRounds(double num) {
    return round(num);
}

int main() {
    char op;
    double num1, num2;

    cout << "Which Operation (+, -, *, /, ^, s, a, r): ";
    cin >> op;

    if (op == 's' || op == 'a' || op == 'r') {
        cout << "The First Number: ";
        cin >> num1;
    } else {
        cout << "The Second Number: ";
        cin >> num1 >> num2;
    }

    switch (op) {
        case '+':
            cout << num1 << " + " << num2 << " = " << add(num1, num2) << endl;
            break;
        case '-':
            cout << num1 << " - " << num2 << " = " << subtract(num1, num2) << endl;
            break;
        case '*':
            cout << num1 << " * " << num2 << " = " << multiply(num1, num2) << endl;
            break;
        case '/':
            cout << num1 << " / " << num2 << " = " << divide(num1, num2) << endl;
            break;
        case '^':
            cout << num1 << " ^ " << num2 << " = " << power(num1, num2) << endl;
            break;
        case 's':
            cout << "sqrt(" << num1 << ") = " << mySqrt(num1) << endl;
            break;
        case 'a':
            cout << "abs(" << num1 << ") = " << myAbs(num1) << endl;
            break;
        case 'r':
            cout << "round(" << num1 << ") = " << myRounds(num1) << endl;
            break;
        default:
            cout << "Error: Wrong operation" << endl;
            break;
    }

    return 0;
}
