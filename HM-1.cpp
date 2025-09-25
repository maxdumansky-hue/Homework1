#include <iostream>
#include <windows.h>
#include <cmath>

using namespace std;

int main() {
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);

    double ka;
    cout << "Ведіть перший катет: ";
    cin >> ka;

    double kb;
    cout << "Ведіть другий катет: ";
    cin >> kb;

    cout << "Гіпотенуза дорівнює: " << sqrt(ka * ka + kb * kb) << endl;
    return 0;
}