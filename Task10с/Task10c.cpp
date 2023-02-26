#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Rus");

    try
    {
        double y, x, t, k;
        cout << "Введите значение X:" << endl;
        cin >> x;
        cout << "Введите значение K: " << endl;
        cin >> k;
        cout << "Введите значение Y: " << endl;
        cin >> y;  
        cout << "U = " << exp(y) + 7.355* pow(k,2) + pow(sin(x), 2) << endl;
    }
    catch (const std::exception)
    {
        cout << "Ошибка входных данных" << endl;
    }
    system("pause");
}