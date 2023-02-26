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
        cout << "N = " << 3 * pow(y,2) + sqrt(fabs(y + 1)) << endl;
    }
    catch (const std::exception)
    {
        cout << "Ошибка входных данных" << endl;
    }
    system("pause");
}