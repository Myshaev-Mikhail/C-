#include <iostream>
#include <cmath>
using namespace std;
double function(double x)
{
    return pow(x, 3) + 5 * (x, 2) + x - 10 * sin(5 * x) - 1;
}
void variables (int &n, double &startingArg, double  &step);
int solution(int &n, double &a, double &step);

int main()
{
    system("chcp 65001");
    int n;
    double a, step;
    variables (n, a, step);
    int d = solution(n, a, step);
    return 0;
}

void variables(int &n, double &a, double  &step)
{
    cout << "Введите количество строк таблицы: \n ";
    cin >> n;
    cout << "Введите начальное значения аргумента: \n ";
    cin >> a;
    cout << "Введите шаг изменения аргумента: \n ";
    cin >> step;
    cout << "Таблица значений функции: \n ";
    cout << "Аргумент \t Значение функции \n ";
}

int solution(int &n, double &a, double &step)
{
    double m, p;
    for (int i = 0; i < n; i ++)
    {
        double x = a + i * step;
        double d = function(x);
        cout << fixed;
        cout.precision(4);
        cout << x << "\t\t" << d << endl;
    }
    cout << endl;
    cout << "Введите начало отрезка";
    cin >> m;
    cout << "Введите конец отрезка";
    cin >> p;

    double summ = 0;
    for (int i = m; i < p; i ++)
    {
        double x = a + i * step;
        double asd = function(x);
        summ += asd;
    }
    cout << "Сумма значений функций на отрезке [" <<m << "," << p << "]:" << summ << endl;
    return 0;
}