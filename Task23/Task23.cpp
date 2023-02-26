#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Rus");

    try
    {
        double y, f, d;
        cout << "Введите значение Y: " << endl;
        cin >> y;
        cout << "Введите значение F: " << endl;
        cin >> f;
        cout << "P = " << exp(2 * y) + sin(f) << endl;
    }
    catch (const std::exception)
    {
        cout << "Ошибка входных данных" << endl;
    }
    system("pause");
}