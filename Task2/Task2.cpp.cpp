#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Rus");

    try
    {
        double p, y;
        cout << "Введите значение P: " << endl;
        cin >> p;
        cout << "Введите значение Y: " << endl;
        cin >> y;
        cout << "K = " << log10(pow(p, 2) + pow(y, 3)) + exp(p) << endl;
    }
    catch (const std::exception)
    {
        cout << "Ошибка входных данных" << endl;
    }
    system("pause");
}