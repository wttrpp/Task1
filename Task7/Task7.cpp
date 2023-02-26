#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Rus");

    try
    {
        double m;
        cout << "Введите значение M: " << endl;
        cin >> m;
        cout << "N = " << pow(m,2) + 2.8*fabs(m) + 0.55 << endl;
    }
    catch (const std::exception)
    {
        cout << "Ошибка входных данных" << endl;
    }
    system("pause");
}