#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Rus");

    try
    {
        double y, x;
        cout << "Введите значение Y: " << endl;
        cin >> y;
        cout << "H = " << sin(pow(y, 2)) - 2.8 * y + sqrt(fabs(y)) << endl;
    }
    catch (const std::exception)
    {
        cout << "Ошибка входных данных" << endl;
    }
    system("pause");
}