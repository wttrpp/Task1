#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Rus");

    try
    {
        double y,d;
        cout << "Введите значение переменных y" << endl;
        cin >> y;
        cout << "F = " << 2 * sin(0.214 * pow(y, 5) + 1) << endl;
    }
    catch (const std::exception)
    {
        cout << "Ошибка входных данных" << endl;
    }
    system("pause");
}