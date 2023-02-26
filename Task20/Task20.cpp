#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Rus");

    try
    {
        double y, x, k;
        cout << "Введите значение Y: " << endl;
        cin >> y;
        cout << "Введите значение X: " << endl;
        cin >> x;
        cout << "Введите значение K: " << endl;
        cin >> k;
        cout << "U = " << exp(k+y) + tan(x) * sqrt(y) << endl;
    }
    catch (const std::exception)
    {
        cout << "Ошибка входных данных" << endl;
    }
    system("pause");
}