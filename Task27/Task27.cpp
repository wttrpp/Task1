#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Rus");

    try
    {
        double y, x, v;
        cout << "Введите значение Y: " << endl;
        cin >> y;
        cout << "Введите значение X: " << endl;
        cin >> x;
        cout << "Введите значение V: " << endl;
        cin >> v;
        cout << "W = " << 1.03 * v + exp(2 * y) + tan(fabs(x)) << endl;
    }
    catch (const std::exception)
    {
        cout << "Ошибка входных данных" << endl;
    }
    system("pause");
}