#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Rus");

    try
    {
        double t, l;
        cout << "������� �������� ���������� t" << endl;
        cin >> t;
        cout << "������� �������� ���������� l" << endl;
        cin >> l;
        cout << "R =" << 3 * pow(t, 2) + 3 * pow(l, 5) + 4.9 << endl;

    }
    catch (const std::exception)
    {
        cout << "������ ������� ������" << endl;
    }

    system("pause");
}