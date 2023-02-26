#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Rus");

    try
    {
        double y,n,g;
        cout << "Введите значение Y: " << endl;
        cin >> y;
        cout << "Введите значение N: " << endl;
        cin >> n;
        cout << "Введите значение G: " << endl;
        cin >> g;
        cout << "N = " << n* sqrt(pow(y,3)+1.09*g) << endl;
    }
    catch (const std::exception)
    {
        cout << "Ошибка входных данных" << endl;
    }
    system("pause");
}