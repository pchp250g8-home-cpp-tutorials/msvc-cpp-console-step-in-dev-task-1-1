// Task-1-1-ru.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <locale>

int main(int argc, char* args[])
{
    unsigned int n; // Количество блоков
    unsigned int k; // количество блоков на башню
    unsigned int t; // Максимальное количество башен
    unsigned int b; // Количесво использованных блоков
    std::locale rus_locale = std::locale("russian.65001"); // русская локаль для терминала Windows 11
    std::cout.imbue(std::locale::global(rus_locale)); // Выбор кодировки терминала
    /*Ввод значений переменных с клавиатуры*/
    std::cout << "Введите количество блоков: ";
    std::cin >> n;
    std::cout << "Введите количество блоков на башню: ";
    std::cin >> k;
    t = n / k; // Максимальное количесво башен
    b = t * k; // Количество использованных блоков
    /*Вывод информации на экран*/
    std::cout << "Из " << n << " блоков можно построить максимум " 
              << t << " башен(ни))\r\n";
    std::cout << "На это уйдёт " << b << " блоков\r\n";
    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
