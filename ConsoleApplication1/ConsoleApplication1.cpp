﻿// ConsoleApplication1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
    setlocale(0, "Russian");

    for (int i = 35; i <= 87; i++)
    {
        if (i % 7 == 1 || i % 7 == 2 || i % 7 == 5)
            cout << i << endl;
        
    }


    //Составьте программу выводящую квадраты чисел от 10 до 20 включительно
    /*for (int i = 10; i <= 20; i++)
    {
        cout << i * i << " ";
        cout << endl;
    }*/

    //for (int i = 0; i < 10; i++) // цикл
    //{
    //    cout << i;
    //}



    //Вводим три числа с клавиатуры и программа выдает их в порядке увеличения
   /* int a, b, c;
    cin >> a >> b >> c;
    if (a > b) swap(a, b);
    if (a > c) swap(a, c);
    if (b > c) swap(b, c);
    cout << a << b << c;*/


    /*int x1, x2, y1, y2;
    cout << "Введите координаты коня\n";
    cin >> x1 >> y1;
    cout << "Введите координаты вражеской фигуры\n";
    cin >> x2 >> y2;
    if  ((x1 + 2 == x2 && y1 + 1 == y2) || (x1 + 2 == x2 && y1 - 1 == y2) || (x1 - 2 == x2 && y1 + 1 == y2) || (x1 - 2 == x2 && y1 - 1 == y2)
        || (x1 + 1 == x2 && y1 + 2 == y2) || (x1 + 1 == x2 && y1 - 2 == y2) || (x1 - 1 == x2 && y1 + 2 == y2) || (x1 - 1 == x2 && y1 - 2 == y2))
        cout << "Бьет";
    else
        cout << "Не бьет";*/


    /*int x1; char y1;
    int x2; char y2;
    cout << "Введите координаты ладьи: сначала цифру потом букву" << endl;
    cin >> x1 >> y1;
    cout << "Введите координаты вражеской фигуры также сначала цифру потом букву" << endl;
    cin >> x2 >> y2;
    if (x1 == x2 || y1 == y2)
        cout << "Бьет";
    else
        cout << "не бьет";*/


   /* int x1, x2, x3;
    cout << "Введите три числа через энтер" << endl;
    cin >> x1 >> x2 >> x3;
    if (x1 < x2)
        x1 = x2;
    if (x1 < x3)
        x1 = x3;
    cout << x1;
    */
      
    
    //int x1, x2, x3;
    //cout << "Введите три числа через энтер" << endl;
    //cin >> x1 >> x2 >> x3;
    //if (x1 == x2 && x2 == x3)
    //    cout << "Числа одинаковые";
    //else if (x1 > x2 && x1 > x3)
    //    cout << x1 << " число большее";
    //else if (x2 > x3)
    //    cout << x2 << " число большее";
    //else
    //    cout <<  x3 << " число самое большее";

    
    
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
