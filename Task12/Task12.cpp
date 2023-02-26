#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Rus");

    try
    {
        double t,x,d;
        cout << "Введите значение X: " << endl;
        cin >> x;
        cout << "Введите значение T: " << endl;
        cin >> t;
        cout << "K = " << 7* pow(t,2)+ 3* sin(pow(x, 3)) +9.2 << endl;
    }
    catch (const std::exception)
    {
        cout << "Ошибка входных данных" << endl;
    }
    system("pause");
}