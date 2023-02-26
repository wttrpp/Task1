#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Rus");

    try
    {
        double n, y;
        cout << "Введите значение N: " << endl;
        cin >> n;
        cout << "Введите значение Y: " << endl;
        cin >> y;
        cout << "G = " << n * (y+3.5) + sqrt(y) << endl;
    }
    catch (const std::exception)
    {
        cout << "Ошибка входных данных" << endl;
    }
    system("pause");
}