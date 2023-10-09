#include <iostream>
#include <iomanip>
#include <time.h>
using namespace std;

int main()
{
    double x, y, R;
    srand((unsigned)time(NULL));

    for (int i = 0; i < 10; i++)
    {
        cout << "x = "; cin >> x;
        cout << "y = "; cin >> y;
        cout << "R = "; cin >> R;

        if ((y <= R && y >= 0 && x >= -R && x <= 0 && R * R <= (x + R) * (x + R) + (y - R) * (y - R)) ||
            (y >= -R && y <= 0 && x >= 0 && x <= R && R * R <= (x - R) * (x - R) + (y + R) * (y + R)))
            cout << "yes" << endl;
        else
            cout << "no" << endl;
    }
    cout << endl << fixed;

    for (int i = 0; i < 10; i++)
    {
        x = 6. * rand() / RAND_MAX - R;
        y = 6. * rand() / RAND_MAX - R;

        if ((y <= R && y >= 0 && x >= -R && x <= 0 && R * R <= (x + R) * (x + R) + (y - R) * (y - R)) ||
            (y >= -R && y <= 0 && x >= 0 && x <= R && R * R <= (x - R) * (x - R) + (y + R) * (y + R)))
            cout << setw(8) << setprecision(4) << x << " "
            << setw(8) << setprecision(4) << y << " " << "yes" << endl;
        else
            cout << setw(8) << setprecision(4) << x << " "
            << setw(8) << setprecision(4) << y << " " << "no" << endl;
    }
    return 0;
}