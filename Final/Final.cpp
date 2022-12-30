// Final.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#include "TreeBaseClass.h"
#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");

    cout << "Введите число элементов: " << endl;
    int n; 
    cin >> n;
    TreeBaseClass vivod;
    cout << "Введите ряд чисел: " << endl;
    for (int i = 0; i < n; i++)
    {
        int x; 
        cin >> x;
        vivod.insert(x);
    }

    vivod.print();
    cout << "\n Введите число для поиска: " << endl;
    int somenum1;
    cin >> somenum1;
    vivod.search(somenum1);
    int y;
    cout << "\n Введите доп число: " << endl;
    cin >> y;
    vivod.insert(y);
    vivod.print();
    cout << " \n Введите число для поиска: " << endl;
    vivod.print();
    int somenum2;
    cin >> somenum2;
    vivod.search(somenum2);

    cout << "\n Удалите любое число из списка: " << endl;
    int somenum3;
    cin >> somenum3;
    vivod.remove(somenum3);
    vivod.print();

    cin.get();
}

