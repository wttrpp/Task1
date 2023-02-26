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
        cout << "P = " << exp(y+5.5) + 9.1 * pow(h,3) << endl;
    }
    catch (const std::exception)
    {
        cout << "Ошибка входных данных" << endl;
    }
    system("pause");
}