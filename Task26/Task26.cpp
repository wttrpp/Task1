#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Rus");

    try
    {
        double p, d;
        cout << "Введите значение P: " << endl;
        cin >> p;        
        cout << "Z = " << sin(pow((pow(p, 2) + 0.4), 3)) << endl;
    }
    catch (const std::exception)
    {
        cout << "Ошибка входных данных" << endl;
    }
    system("pause");
}