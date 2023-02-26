#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Rus");

    try
    {
        double y, r, d;
        cout << "Введите значение Y: " << endl;
        cin >> y;
        cout << "Введите значение R: " << endl;
        cin >> r;
        cout << "W = " << exp(y + r) + 7.2 * sin(r) << endl;
    }
    catch (const std::exception)
    {
        cout << "Ошибка входных данных" << endl;
    }
    system("pause");
}