#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Rus");

    try
    {
        double a, t,f;
        cout << "Введите значение A: " << endl;
        cin >> a;
        cout << "Введите значение T: " << endl;
        cin >> t;
        cout << "D = " << 9.8 * pow(a, 2) + 5.52 * cos(pow(t, 5)) << endl;
    }
    catch (const std::exception)
    {
        cout << "Ошибка входных данных" << endl;
    }
    system("pause");
}