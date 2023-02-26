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
        cout << "S = " << sqrt(cos(4 * pow(y, 2)) +7.151) << endl;
    }
    catch (const std::exception)
    {
        cout << "Ошибка входных данных" << endl;
    }
    system("pause");
}