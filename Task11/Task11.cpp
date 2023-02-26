#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Rus");

    try
    {
        double x, y;
        cout << "Введите значение X: " << endl;
        cin >> x;
        cout << "Введите значение Y: " << endl;
        cin >> y;
        cout << "S = " << 9.756 * pow(y,7)+ 2* tan(x) << endl;
    }
    catch (const std::exception)
    {
        cout << "Ошибка входных данных" << endl;
    }
    system("pause");
}