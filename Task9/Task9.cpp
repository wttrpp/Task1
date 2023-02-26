#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Rus");

    try
    {
        double y,x, t;
        cout << "Введите значение Y: " << endl;
        cin >> y;
        cout << "Введите значение X: " << endl;
        cin >> x;
        cout << "R = " << log10(y+0.95) + sin(pow(x, 4)) << endl;
    }
    catch (const std::exception)
    {
        cout << "Ошибка входных данных" << endl;
    }
    system("pause");
}