#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Rus");

    try
    {
        double y;
        cout << "Введите значение Y: " << endl;
        cin >> y;
        cout << "T = " << sqrt(fabs(6 * pow(y,2) - 0.1 * y + 4)) << endl;
    }
    catch (const std::exception)
    {
        cout << "Ошибка входных данных" << endl;
    }
    system("pause");
}