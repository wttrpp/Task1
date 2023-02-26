#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Rus");

    try
    {
        double y, h;
        cout << "Введите значение Y: " << endl;
        cin >> y;
        cout << "Введите значение H: " << endl;
        cin >> h;
        cout << "T = " << exp(y+h) + sqrt(fabs(6.4 * y)) << endl;
    }
    catch (const std::exception)
    {
        cout << "Ошибка входных данных" << endl;
    }
    system("pause");
}