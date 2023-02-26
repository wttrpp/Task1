#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Rus");

    try
    {
        double y;
        cout << "Введите значение Y: " << endl;
        cin >> y;
        cout << "Z = " << 3 * pow(y,2) + sqrt(pow(y,3)+1) << endl;
    }
    catch (const std::exception)
    {
        cout << "Ошибка входных данных" << endl;
    }
    system("pause");
}