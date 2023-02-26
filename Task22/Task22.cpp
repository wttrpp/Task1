#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Rus");

    try
    {
        double y, x, u, d;
        cout << "Введите значение Y: " << endl;
        cin >> y;
        cout << "Введите значение X: " << endl;
        cin >> x;
        cout << "Введите значение Y: " << endl;
        cin >> u;
        cout << "T = " << sin(2 * u) * log10(2*pow(y,2)+ sqrt(x)) << endl;
    }
    catch (const std::exception)
    {
        cout << "Ошибка входных данных" << endl;
    }
    system("pause");
}