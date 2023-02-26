#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Rus");

    try
    {
        double y, x,t;
        cout << "Введите значение X: " << endl;
        cin >> x;
        cout << "Введите значение Y: " << endl;
        cin >> y;
        cout << "M = " << cos(2 * y) + 3.6 * exp(x) << endl;

    }
    catch (const std::exception)
    {
        cout << "Ошибка входных данных" << endl;
    }
    system("pause");
}