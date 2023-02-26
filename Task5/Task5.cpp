#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Rus");

    try
    {
        double y ,x;
        cout << "Введите значение X: " << endl;
        cin >> x;
        cout << "L = " << 1.51 * cos(pow(x, 2)) + 2 * pow(x,3) << endl;
    }
    catch (const std::exception)
    {
        cout << "Ошибка входных данных" << endl;
    }
    system("pause");
}