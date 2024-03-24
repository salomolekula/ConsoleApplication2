
#include <iostream>
#include <string>
#include <Windows.h>
#include "Test.h"




int main()
{
    setlocale(LC_ALL, "rus");     // Изменение кодировки программы
    SetConsoleOutputCP(1251);     // Изменение кодировки консоли
    SetConsoleCP(1251);
    system("chcp 1251");

    test();

    return 0;
}