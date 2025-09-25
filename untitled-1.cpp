#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double a, b, c;
    cout << "Введіть коефіцієнти a, b, c: ";
    cin >> a >> b >> c;

    if (a == 0) {
        cout << "Це не квадратне рівняння (a не може бути 0)." << endl;
    } else {
        double D = b * b - 4 * a * c;
        if (D > 0) {
            double x1 = (-b + sqrt(D)) / (2 * a);
            double x2 = (-b - sqrt(D)) / (2 * a);
            cout << "Два дійсних корені: x1 = " << x1 << ", x2 = " << x2 << endl;
        } else if (D == 0) {
            double x = -b / (2 * a);
            cout << "Один дійсний корінь: x = " << x << endl;
        } else {
            cout << "Немає дійсних коренів (дискримінант < 0)." << endl;
        }
    }
    return 0;
}
