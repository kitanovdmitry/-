/* Автор: Дмитрий Китанов
Группа: СБС-001-О-01, 2-я подгруппа
Задание №3, вариант 2
Цель: вычислить угол фи между векторами a и b , используя формулу вычисления скалярного произведения векторов
*/
#include <iostream>
#include <cmath>
#include <climits>

#define PI 3.1415926535
using namespace std;

double cos_fi(double a1, double a2, double a3,
              double b1, double b2, double b3)
{
    double dot_product = a1*b1 + a2*b2 + a3*b3;
    double absolute_value_a = sqrt(a1*a1 + a2*a2 + a3*a3);
    double absolute_value_b = sqrt(b1*b1 + b2*b2 + b3*b3);

    return dot_product / (absolute_value_a * absolute_value_b);
}

int main()
{
    double a1, a2, a3 = 0.0,
           b1, b2, b3 = 0.0;
    bool typeFail;

    do
    {
        cout << "Enter three coordinates(type double ) of the vector 'a': 1)a1, 2)a2, 3)a3\n";
        cin >> a1 >> a2 >> a3;

        typeFail = cin.fail();
        cin.clear();
        cin.ignore(INT_MAX, '\n');
    }
    while (typeFail);

    do
    {
        cout << "Enter three coordinates(type double ) of the vector 'b': 1)b1, 2)b2, 3)b3\n";
        cin >> b1 >> b2 >> b3;

        typeFail = cin.fail();
        cin.clear();
        cin.ignore(INT_MAX, '\n');
    }
    while (typeFail);

    cout << "a(" << a1 <<", " << a2 << ", " << a3 << ")\n";
    cout << "b(" << b1 <<", " << b2 << ", " << b3 << ")\n";

    double angle_fi = acos(cos_fi(a1, a2, a3,
                                  b1, b2, b3));
    angle_fi = (angle_fi * 180 / PI);

    cout << "the fi angle between these vectors = " << angle_fi <<" degrees\n";
    return 0;
}
