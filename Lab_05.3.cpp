#include <iostream>
#include <cmath>
#include <iomanip> // Для використання setw()
using namespace std;

double z(const double x);

int main()
{
    double pp, pk, y;
    int n;
    cout << "pp = "; cin >> pp;
    cout << "pk = "; cin >> pk;
    cout << "n = "; cin >> n;

    double dp = (pk - pp) / n;
    double p = pp;

    // Виводимо заголовки таблиці з лініями
    cout << "+------------+----------------------+" << endl;
    cout << "|    p       |          y           |" << endl;
    cout << "+------------+----------------------+" << endl;

    while (p <= pk)
    {
        y = z(p * p) + (2 * z(2 * p + p * p)) + 1;
        // Форматований вивід значень p і y з лініями
        cout << "| " << setw(10) << p << " | " << setw(20) << y << " |" << endl;
        cout << "+------------+----------------------+" << endl;
        p += dp;
    }

    return 0;
}

double z(const double x)
{
    if (abs(x) >= 1)
        return (cos(2 * x) + 1) / cos(x) + pow(sin(x), 2);
    else
    {
        double S = 0;
        int k = 0;
        double a = 1;
        S = a;
        do
        {
            k++;
            double R = (4 * pow(x, 2)) / (2 * k + 2) * (2 * k + 3);
            a *= R;
            S += a;
        } while (k < 6);
        return S;
    }
}
