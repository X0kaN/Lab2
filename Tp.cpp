﻿// Tp.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#include "feature1.cpp"
#include "feature1.h"
#include "feature2.cpp"
#include "feature2.h"
#include <iostream>
double a, b,c;

int main()
{
    std::cout << "Введите первое число ";
    std::cin >> a;
    std::cout << "Введите второе число ";
    std::cin >> b;
    std::cout << "Что сделать с числами?" << std::endl;
    std::cout << "Нажмите 1, чтобы сложить" << std::endl;
    std::cout << "Нажмите 2, чтобы вычесть" << std::endl;
    std::cout << "Нажмите 3, чтобы умножить" << std::endl;
    std::cout << "Нажмите 4, чтобы разделить" << std::endl;
    std::cin >> c;std::cout << std::endl;
   
    switch (c) {
    case 1:
        std::cout << Sum(a, b);
        break;
    case 2:
        std::cout << Sub(a,b);
        break;
    case 3:
        std::cout << "В разработке";
        break;
    case 4:
        std::cout << "В разработке";
        break;
    }
}
// RELEASE 1
// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
